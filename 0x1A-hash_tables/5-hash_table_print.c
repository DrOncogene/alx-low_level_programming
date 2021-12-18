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
	buffer[0] = '\0';
	write(1, "{", 1);
	for (i = 0; i < ht->size; i++)
	{
		current = (ht->array)[i];
		if (current == NULL)
			continue;
		else
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
				current = current->next;
			}
	}
	if (strlen(buffer) > 0)
		write(1, buffer, strlen(buffer) - 2);
	free(buffer);
	write(1, "}\n", 2);
}
