#include <stdio.h>

/**
 *
 * main-program entry poing
 *
 * Return:0 If no more errow
 *
 */

int main(void)

{

	int lw = 'a';

	while (lw <= 'z')

	{

		if (lw == 'e' || lw == 'q')

		{

			lw += 1;

		}

		else

		{

			putchar(lw);

			lw += 1;

		}

	}

	putchar('\n');

	return (0);

}
