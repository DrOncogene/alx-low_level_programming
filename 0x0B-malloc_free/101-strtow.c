#include "main.h"
#include <stdlib.h>
#include <stddef.h>

int word_count(char *s);
int word_len(char *w);
/**
 * strtow - creates an array of words for a string delimited by spaces
 * @str: the string
 * Return: pointer to the array
 */
char **strtow(char *str)
{
	char **s, *str_h;
	int words, i, j, len_word;

	words = word_count(str);
	str_h = str;
	len_word = 0;
	if (str == NULL || *str == 0 || words == 0)
		return (NULL);
	s = malloc(sizeof(int) * words * 2);
	if (s != NULL)
	{
		i = 0;
		while (*str != 0)
		{
			if (str == str_h && *str != ' ' && *str != 0)
			{
				len_word = word_len(str);
				s[i] = malloc(sizeof(char) * len_word);
				if (s[i] != NULL)
				{
					for (j = 0; j < len_word; j++)
						s[i][j] = *(str + j);
					i++;
				}
			}
			else if (*str == ' ' && *(str + 1) != ' ' && *(str + 1) != 0)
			{
				len_word = word_len(str + 1);
				s[i] = malloc(sizeof(char) * len_word);
				if (s[i] != NULL)
				{
					for (j = 0; j < len_word; j++)
						s[i][j] = *(str + 1 + j);
					i++;
				}
			}
			str++;
		}
		s[i] = malloc(sizeof(int) * 1);
		s[i] = NULL;
	}

	return (s);
}

/**
 * word_count - counts the number of words in a string delimited by spaces
 * @s: the string
 * Return: word count
 */
int word_count(char *s)
{
	int count;

	count = 0;
	while (*s != 0)
	{
		if (*s != ' ' || (*s == ' ' && *(s + 1) != ' ' && *(s + 1) != 0))
			count++;
		s++;
	}

	return (count);
}

/**
 * word_len - find the length of a word given the start, ends with a space
 * @w: the word
 * Return: length of w
 */
int word_len(char *w)
{
	if (*w == ' ' || *w == 0)
		return (0);
	return (word_len(w + 1) + 1);
}
