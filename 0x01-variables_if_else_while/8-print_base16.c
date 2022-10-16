#include <stdio.h>



/**
 * main - A program that prints all the numbers of base 16
 * In lowercase 
 * use only putchar
 * Return:0 ends the program
 */



int main(void)

{

	int n = 48;

	int l = 'a';

	while (n <= 57)

	{

		putchar(n);

		n += 1;

	}

	while (l <= 'f')

	{

		putchar(l);

		l++;

	}

	putchar('\n');

	return (0);

}
