#include <stdio.h>
#include "main.h"

/**
 * main - fucntion that prints its name
 * @argc: arguments count
 * @argv: arguments vector
 * Return: always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
