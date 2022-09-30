#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination of the copied string
 * @src: string to copy
 * @n: number of byte(s) to copy
 *
 * Return: returns a pointer to copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] =  src[j];
		i++;
		j++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
