#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of the diagonals of the matrix
 * @a: values of the array
 * @size: size of square
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	int diagO = 0;
	int diagT = 0;

	for (i = 0; i < size; i++)
	{
		diagO += a[(i * size) + i];
		diagT += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", diagO, diagT);
}
