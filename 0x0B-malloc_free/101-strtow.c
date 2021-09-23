#include "main.h"
#include <stdlib.h>
#include <stddef.h>

int word_count(char *s);
int word_len(char *w);
void set_string(char **, char *, int, int);
/**
 * strtow - creates an array of words for a string delimited by spaces
 * @str: the string
 * Return: pointer to the array
 */
char **strtow(char *str)
{
	char **s, *str_h;
	int words, i, len_word;

	words = word_count(str);
	str_h = str;
	if (str == NULL || *str == 0 || words == 0)
		return (NULL);
	s = malloc(sizeof(*s) * (words + 1));
	if (s != NULL)
	{
		i = 0;
		while (*str != 0)
		{
			len_word = 0;
			if (str == str_h && *str != ' ' && *str != 0)
			{

				len_word = word_len(str);
				set_string(s, str, i, len_word);
				i++;
			}
			else if (*str == ' ' && *(str + 1) != ' ' && *(str + 1) != 0)
			{
				len_word = word_len(str + 1);
				set_string(s, str + 1, i, len_word);
				i++;
			}
			if (len_word == 0)
				str++;
			else
				str += len_word;
		}
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
		if (*s != ' ' && *s != 0)
		{
			count++;
			s += word_len(s);
		}
		else if (*s == ' ' && *(s + 1) != ' ' && *(s + 1) != 0)
		{
			count++;
			s += word_len(s + 1) + 1;
		}
		else
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

/**
 * set_string - copy a string of len chars from src to dest array at position i
 * @dest: destination array
 * @src: the string
 * @i: position of string in dest
 * @len: length of string
 * Return: nothing
 */
void set_string(char **dest, char *src, int i, int len)
{
	int j;

	dest[i] = malloc(sizeof(char) * (len + 1));
	if (dest[i] != NULL)
	{
		for (j = 0; j < len; j++)
			dest[i][j] = *(src + j);
	}
}
