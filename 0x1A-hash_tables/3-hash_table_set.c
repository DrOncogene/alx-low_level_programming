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

	if (ht == NULL || strlen(key) == 0 || key == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	current = (ht->array)[index];
	while (current)
	{
		if (current->key == (char *)key)
		{
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = (char *)key;
	new->value = strdup(value);
	if ((ht->array)[index] == NULL)
		new->next = NULL;
	else
		new->next = (ht->array)[index];

	(ht->array)[index] = new;

	return (1);
}
