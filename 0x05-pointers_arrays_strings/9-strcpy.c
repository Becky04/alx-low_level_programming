#include <stdio.h>
/**
 * *_strcpy - copies string to given memory location
 * @dest: destination of the string
 * @src: copied string
 *
 * Return: array of characters of copied string
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = *(src + len);

	return (dest);
}
