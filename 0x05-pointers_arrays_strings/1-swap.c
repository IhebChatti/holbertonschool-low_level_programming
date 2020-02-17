#include "holberton.h"
/**
*swap_int - swap two integers
*@a: first int to swap
*@b: second int to swap
*Return: void
*/
void swap_int(int *a, int *b)
{
	int holder;

	holder = *b;
	*b = *a;
	*a = holder;
}
