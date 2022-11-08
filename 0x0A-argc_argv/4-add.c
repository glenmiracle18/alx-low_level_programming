#include <stdio.h>
#include <stdlib.h>

/**
 * main - aadds positve numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int result = 0, num, i, j, k;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++);
		{
			if (argv[i][j] > '9' || argv [i][j] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		num += atoi(argv[i]);
	}
	printf("%d\n", num);
	return (0);
}
