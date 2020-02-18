#include <stdio.h>

/**
*print_array - print n elements of an array
*@a: pointer type int
*@n: int
*Return: Void
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
