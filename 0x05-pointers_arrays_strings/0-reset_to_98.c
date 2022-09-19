#include <stdio.h>

/**
 * reset_to_98 - resets the value of the parameter to 98
 * @n: the address of the the given integer
 *
 * Return: returns 98 as the new integer
 */

int reset_to_98(int *n)
{
	*n = 98;
	return (*n);
}
