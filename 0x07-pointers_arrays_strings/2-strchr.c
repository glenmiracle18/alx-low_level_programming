#include "main.h"

/**
 * _strch - locates a character in a string
 * @s: The string to be searched
 * @c: The character to be located
 *
 * Return: If c is found - a pointer to the first occurence
 * If c is not found - Null.
 */

char *_strch(char *s, char c)
{
	int index;
	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
