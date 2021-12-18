#include "hash_tables.h"

/**
  * hash_table_get - retrieves a value for a given key
  * @ht: the hash table
  * @key: the key whom value is to be retrieved
  * Return: value for key or NULL, if key is not found
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)(key), ht->size);
	current = (ht->array)[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);

		current = current->next;
	}

	return (NULL);
}
