#include "hash_tables.h"

/**
  * hash_table_print - prints a hash table
  * @ht: the table
  * Return: nothing
  */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;
	char *buffer;

	if (ht == NULL)
		return;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return;
	write(1, "{", 1);
	for (i = 0; i < ht->size; i++)
	{
		current = (ht->array)[i];
		if (current == NULL)
			continue;
		else
		{
			while (current)
			{
				if (strlen(buffer) > 1000)
					buffer = realloc(buffer, 1024);
				if (buffer == NULL)
					return;
				strcat(buffer, "'");
				strcat(buffer, current->key);
				strcat(buffer, "': '");
				strcat(buffer, current->value);
				strcat(buffer, "', ");
				current = current->next;
			}
		}
	}
	write(1, buffer, strlen(buffer) - 2);
	write(1, "}\n", 2);
}
