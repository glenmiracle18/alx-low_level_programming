#include "main.h"

/**
 * _strlen_recursion that returns the lenght of a string
 * @s: string to recieve lenght
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
