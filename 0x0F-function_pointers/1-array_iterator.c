#include "function_pointers.h"
/**
  *array_iterator - performs an action on members of an array
  *@array: address of the array
  *@size: the size of the array
  *@action: the address of the function that will perform the action
  *
  *Return: voi
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
		action(array[i++]);
}
