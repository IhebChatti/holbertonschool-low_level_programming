#include "holberton.h"
/**
*reverse_array - reverse an array
*@a: pointer type int
*@n: pointer type int
*Return: void
*/
void reverse_array(int *a, int n)
{
	int j, nn;
	char temp;

	if (n % 2 == 0)
		nn = n + 1;
	else
		nn = n;
	for (j = 0; j < (nn / 2); j++)
	{
		temp = a[j];
		a[j] = a[nn - 1 - j];
		a[nn - 1 - j] = temp;
}
}
