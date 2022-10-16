#include <stdio.h>



/**
 * main - Program that prints the letters of the alphabet in reverse
 * You can only user the put char Functio.
 * Return: 0 Ends the program
 */



int main(void)

{

	int n = 122;

	while (n > 96)

	{

		putchar(n);

		n -= 1;

	}

	putchar('\n');

	return (0);

}
