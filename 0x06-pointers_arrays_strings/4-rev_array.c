#include "holberton.h"
/**
*reverse_array - reverse an array
*@a: pointer type int
*@n: pointer type int
*Return: void
*/
void reverse_array(int *a, int n)
{
	int j;
	int temp;

	for (j = 0; j < ((n - 1) / 2); j++)
	{
		temp = a[j];
		a[j] = a[n - 1 - j];
		a[n - 1 - j] = temp;
	}
}
