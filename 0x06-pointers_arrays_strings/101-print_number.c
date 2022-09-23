#include "main.h"

/**
* print_number - function that prints an integer
* @n: the given integer
*/
void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
	{
		m = n;
	}
	if (m / 10 != 0)
		print_number(m / 10);

	_putchar((m % 10) + 48);
}
