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
	unsigned long int index, key_exist;
	hash_node_t *new, *current, *prev;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = (char *)key;
	new->value = strdup(value);
	if ((ht->array)[index] == NULL)
		new->next = NULL;
	else
	{
		key_exist = 0;
		prev = NULL;
		current = (ht->array)[index];
		while (current)
		{
			if (current->key == (char *)key)
			{
				key_exist = 1;
				break;
			} prev = current;
			current = prev->next;
		}
		if (prev && key_exist == 1)
		{
			prev->next = current->next;
			free(current);
		} else if (prev == NULL && key_exist == 1)
		{
			(ht->array)[index] = current->next;
			free(current);
		}
		new->next = (ht->array)[index];
	}
	(ht->array)[index] = new;
	return (1);
}
