#include "main.h"

/**
 * _isupper - checks if a char is uppercase
 * @c: char to be checked
 * Return: 1 if c is uppercase, 0 if otherwise
 */
int _isupper(int c)
{
  int i;

  for (i = 65; i <= 90; i++)
  {
    if (i == c)
      return (1);
    else
      return (0);
  }
}