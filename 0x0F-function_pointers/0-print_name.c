#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
*print_name - a function to print a name
*@name: the name to be printed
*@f: function pointer
*Return: Void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	return;
	f(name);
}
