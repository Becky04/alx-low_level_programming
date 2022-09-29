#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a given string
 * @s: string to check the length of
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int len, i = 0;
	char a, z;

	len = _strlen(s) - 1;
	while (i < len)
	{
		a = s[i];
		z = s[len];
		s[i++] = z;
		s[len--] = a;
	}
}





