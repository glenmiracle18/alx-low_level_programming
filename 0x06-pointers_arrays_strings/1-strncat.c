#include "main.h"

/**
 * _strncat- function that concatenates two strings
 *
 * @dest: pointer to desticantion char
 * @src: pointer to souce char
 * @n: number of bytes to recieve
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int j = 0;
	int i = 0;

	while (dest[i] != '\0')
		i++;
	while (src[i] != '\0')
	{
		if (j < n)
		{
			dest[i] = src[i];
			i++;
		}
		j++;
	}
	return (dest);
}
