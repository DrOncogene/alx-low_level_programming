#include "hash_tables.h"

/**
  * key_index - computes the index for a given key
  * @key: the key string
  * @size: the size of the hash table
  * Return: index computed
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
