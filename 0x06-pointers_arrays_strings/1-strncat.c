#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: array of string appended to
 * @src: array of string to add
 * @n: number of byte(s) to add from src
 *
 * Return: pointer of concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j != n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}


