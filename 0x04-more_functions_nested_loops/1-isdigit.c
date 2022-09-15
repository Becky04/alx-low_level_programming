#include <stdio.h>
#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: character to check
 *
 * Return: 1 if it's a digit and 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
