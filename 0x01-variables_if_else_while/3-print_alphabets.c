#include <stdio.h>


/**
 * main-program entry poin.
 *
 * Return:0 if no error
 */

int main(void)

{

	int lw = 'a';

	int up = 'A';

	while (lw <= 'z')

	{

		putchar(lw);

		lw += 1;

	}

	while (up <= 'Z')

	{

		putchar(up);

		up += 1;

	}

	putchar('\n');

	return (0);

}
