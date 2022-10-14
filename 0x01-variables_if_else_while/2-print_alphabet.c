#include <stdio.h>
#include <ctype.h>

/**
 * main-program entry point
 *
 * Return:0 if no error, non zero if error.
 */

int main(void)

{

	int l = 'a';

	while (l <= 'z')

	{

		putchar(l);

		l += 1;

	}

	putchar('\n');

	return (0);

}
