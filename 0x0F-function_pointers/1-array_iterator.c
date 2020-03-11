#include "function_pointers.h"
#include <stddef.h>
/**
*array_iterator - execute a function given as par of each arr elem
*@array: pointer type int
*@size: size_t
*@action: function pointer
*Return: Void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size > 0 && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
	else 
		return;
}
