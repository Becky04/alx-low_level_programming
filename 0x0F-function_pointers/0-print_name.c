#include "function_pointers.h"
/**
  *print_name - prints 
  *@name: address of the string
  *@f: address if the function f
  *
  *Return: voi
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
