#include "function_pointers.h"
/**
  *int_index - a function that searches for an integer.
  *@array: address of the array
  *@size: the size of the array
  *@cmp: the address of the function that will do the comparison
  *
  *Return: integer -1 if no element matches else index of the element
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size < 1)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
