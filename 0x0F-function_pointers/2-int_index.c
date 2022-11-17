#include <stidio.h>
#include "functions_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer  to the comparing function
 *
 * Return: index of the first element for which
 * the cmp function does not return 0, of -1 if no match
 * is found or size is negative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (s = 0; x < size; x++)
			if (cmp(array[x]))
				return (x)
	}

	return (-1);
}
