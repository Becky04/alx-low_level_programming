#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: >0 if s1 is greater, <0 if s1 lesser,
 * 0 if both strings are equal
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			break;
		s1++;
		s2++;
	}
	return (*s1 - *s2);

}

