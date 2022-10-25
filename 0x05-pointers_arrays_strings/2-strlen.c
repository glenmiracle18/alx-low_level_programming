#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the lenght of a string
 * @s: string to be returned
 *
 * Return: Aways 0;
 */

int _strlen(char *s)
{
	int i = 0;
	
	while (*(s + i) != '\0');

	{
		i++;
	}
	return (i);
}
