#include "main.h"

/**
 * _strcat - fuction that concatenates two strings
 * @dest: array of first string to be appended to
 * @src: array of second string to add
 *
 * Return: pointer of concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;
	char *p;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	p = dest;

	return (p);

}
