#include "hash_tables.h"

/**
  * shash_table_create - creates a sorted hash table
  * @size: size of the table
  * Return: pointer to the hash table
  */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		(table->array)[i] = NULL;

	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
  * shash_table_set - adds a key/value pair in a hash table
  * @ht: the table
  * @key: the key
  * @value: the value
  * Return: 1 if success, 0 otherwise
  */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *current;
	unsigned long int index;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
		return (0);

	current = (ht->array)[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(new);
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = (ht->array)[index];
	insert_in_sorted(ht, new);

	return (1);
}

/**
  * insert_in_sorted - inserts a new node in the sorted dl list
  * @ht: the hash table
  * @node: the new key/value pair
  * Return: nothing
  */
void insert_in_sorted(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *current;

	if (ht->shead == NULL)
	{
		ht->shead = node;
		ht->stail = node;
		node->sprev = NULL;
		node->snext = NULL;
	}
	else
	{
		current = ht->shead;
		while (current)
		{
			if (strcmp(current->key, node->key) > 0)
			{
				node->sprev = current->sprev;
				if (current->sprev)
					current->sprev->snext = node;
				else
					ht->shead = node;
				current->sprev = node;
				node->snext = current;
				return;
			}
			current = current->snext;
		}
		if (current == NULL)
		{
			ht->stail->snext = node;
			node->sprev = ht->stail;
			node->snext = NULL;
			ht->stail = node;
		}
	}
}

/**
  * shash_table_get - locates a given value for a given key
  * @ht: the hash table
  * @key: the key to be found
  * Return: the value
  */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current;
	unsigned long int index;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = (ht->array)[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);

		current = current->next;
	}

	return (NULL);
}

/**
  * shash_table_print - prints a sorted hash table
  * @ht: the hash table
  * Return: nothing
  */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return;
	buffer[0] = '\0';
	write(1, "{", 1);
	current = ht->shead;
	while (current)
	{
		strcat(buffer, "'");
		strcat(buffer, current->key);
		strcat(buffer, "': '");
		strcat(buffer, current->value);
		strcat(buffer, "', ");
		if (strlen(buffer) > 1000)
		{
			buffer = realloc(buffer, sizeof(buffer) + 1024);
			if (buffer == NULL)
			{
				free(buffer);
				return;
			}
		}
		current = current->snext;
	}

	if (strlen(buffer) > 0)
		write(1, buffer, strlen(buffer) - 2);
	free(buffer);
	write(1, "}\n", 2);
}

/**
  * shash_table_print_rev - prints a sorted hash table
  * @ht: the hash table
  * Return: nothing
  */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return;
	buffer[0] = '\0';
	write(1, "{", 1);
	current = ht->stail;
	while (current)
	{
		strcat(buffer, "'");
		strcat(buffer, current->key);
		strcat(buffer, "': '");
		strcat(buffer, current->value);
		strcat(buffer, "', ");
		if (strlen(buffer) > 1000)
		{
			buffer = realloc(buffer, sizeof(buffer) + 1024);
			if (buffer == NULL)
			{
				free(buffer);
				return;
			}
		}
		current = current->sprev;
	}

	if (strlen(buffer) > 0)
		write(1, buffer, strlen(buffer) - 2);
	free(buffer);
	write(1, "}\n", 2);
}

/**
  * shash_table_delete - deletes/frees a hash table
  * @ht: the table
  * Return: nothing
  */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *next;

	current = ht->shead;
	while (current)
	{
		next = current->snext;
		free(current->key);
		free(current->value);
		free(current);

		current = next;
	}

	free(ht->array);
	free(ht);
}
