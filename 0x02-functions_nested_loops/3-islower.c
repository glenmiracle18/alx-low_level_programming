#include "main.h"
/**
 * _islower - _islower
 * @c: c is an ascii character
 *
 * Return: o or 1
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
