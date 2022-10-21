#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Function that loops through digits
 * _putchar - Prints characters
 * Return: Returns 0
 */

void print_numbers(void);
{
	char x = 48;
	while (x >= 48 && x <= 57)

	{
		putchar(x);
		x++;
	}
	putchar('\n');
}
