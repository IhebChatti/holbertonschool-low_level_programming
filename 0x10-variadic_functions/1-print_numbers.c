#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_numbers - function to print numbers
*@separator: const char pointer
*@n: const unsigned int
*Return: Void11
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
