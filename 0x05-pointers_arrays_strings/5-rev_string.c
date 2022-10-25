#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int length = strlen(s);
	int middle = length / 2;
	char temp;
	
	for (int i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
