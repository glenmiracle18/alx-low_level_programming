#include "main.h"

/**
 * _memcpy - function that copies memory area.
 *
 * @dest: dest positions
 * @src: source position
 * @n: size of bytes
 * Return: char
 */

char *memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
