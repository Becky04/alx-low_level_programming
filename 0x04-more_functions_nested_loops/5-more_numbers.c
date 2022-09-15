#include "main.h"

/**
 * more_numbers - prints 0 to 14, 10 times
 *
 * Return: 0-14 followed by newline
 */

void more_numbers(void)
{
	int i;
	int n;

	for (n = 1; n <= 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
