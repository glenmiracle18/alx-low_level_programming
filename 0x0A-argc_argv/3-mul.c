#include <stio.h>
#include <stdlib.h>

/**
 * main - function that multiplies two numbers that are argumetns
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0
 */

int main(int argc, char **argv)
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
