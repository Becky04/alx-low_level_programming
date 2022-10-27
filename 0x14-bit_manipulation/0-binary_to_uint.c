#include "main.h"
#include <stdio.h>

/**
 * binary_to_unit - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint, place;
	int n;

	if (!b)
		return (0);
	for (n = 0; b[n]; n++)
		;
	n--;
	for (place = 1, uint = 0; n >= 0; n--)
	{
		if (b[n] == '0')
		{
			place *= 2;
			continue;
		}
		else if (b[n] == '1')
		{
			uint += place;
			place *= 2;
			continue;
		}
		return (0);
	}
	return (0);
}
