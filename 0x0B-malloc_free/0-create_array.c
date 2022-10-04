#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * and initializes it with a specific character
 * @size: size of array
 * @c: specific character
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *array;

	array = (char *) malloc(sizeof(char) * size);
	if (size == NULL || array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
