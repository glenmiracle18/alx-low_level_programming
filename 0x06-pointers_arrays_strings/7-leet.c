#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @s: pointer to char
 */

char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char *l = "aAeEoOlLtT";
	char *n = "4433001177";

	while (s[i] != '\0')
	{
		while (l[j] != '\0')
		{
			if (s[i] == l[j])
				s[ii] = n[j];
			j++;
		}
		j = 0;
		j++;
	}
	return (s);
}