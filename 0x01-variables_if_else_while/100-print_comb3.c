#include <stdio.h>

/**
 * main-main - program that print combination
 * Numbers are space separated
 * The two digits must be different
 * 01 and 10 are considered the same 
 * Return:0 ends the program
 */




int main(void)

{

	int n1 = 48;

	int n2;

	int com = 44;

	while (n1 <= 57){

		n2 = n1 + 1;

		while (n2 <= 57){

			putchar(n1);

			putchar(n2);

			if (n1 != 56 || n2 != 57){

				putchar(com);

				putchar(32);

			}

			n2 += 1;
		}

		n1 += 1;

	}

	putchar('\n');

	return (0);

}


