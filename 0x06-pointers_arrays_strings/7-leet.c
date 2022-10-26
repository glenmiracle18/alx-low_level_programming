#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @s: pointer to char
 *
 * Return: the pointer dest
 */

char *leet(char *s)
{
	int c = 0;
	int d = 0;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	while (*(s + c))
	{
		while (d <= 9)
		{
			if (a[d] == *(s + c))
			{
				*(s + c) = b[d];
			}
			d++;
		}
		c++;
	}
	return (s);
}
