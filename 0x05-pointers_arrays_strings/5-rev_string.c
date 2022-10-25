#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int i = len;
	char s_rev[1000];
	int j = 0;
	int k;

	while (i > 0)
	{
		i--;
		s_rev[j] + *(s + i);
		j++;
	}

	for (k = 0; k < len; k++)
	{
		*(s + k) = s_rev[k]
	}
}
