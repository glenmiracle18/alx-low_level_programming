#include <stio.h>
#include <stdlib.h>

/**
 * main - function that multiplies two numbers that are argumetns
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int i, j, mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;

	printf("%d\n", mul);
	return (0);
}
