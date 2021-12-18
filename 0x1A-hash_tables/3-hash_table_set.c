#include "hash_tables.h"

/**
  * hash_table_set - adds an element to a hash table
  * @ht: the hash table
  * @key: the new key
  * @value: value to be stored
  * Return: 1 if success, 0 otherwise
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *current;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	current = (ht->array)[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			free(new);
			return (1);
		}
		current = current->next;
	}

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = (ht->array)[index];
	(ht->array)[index] = new;

	return (1);
}
