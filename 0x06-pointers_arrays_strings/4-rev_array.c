#include "main.h"

/**
 * reverse_array - function that reverse and array
 *
 * @a: pointer of array int
 * @n: the number of elements to swap
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int *init, *final;
	int aux = 0;

	init = a;
	final = a;

	n -= 1;
	while (i < n)
		i++;
	while (j <= i)
	{
		aux = init[j];
		init[j] = final[i];
		final[i] = aux;
		j++;
		i--;
	}
}
