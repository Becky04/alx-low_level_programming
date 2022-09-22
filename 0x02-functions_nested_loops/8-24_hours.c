#include "main.h"

/**
 * jack_bauer - function that prints every minute in one day
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	for (int H = 0; H < 24; H++)
	{
		for (int M = 0; M < 60; M++)
		{
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((M / 10) + '0');
			_putchar((M % 10) + '0');
			_putchar('\n');
		}
	}
}
