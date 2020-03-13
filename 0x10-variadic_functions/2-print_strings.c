#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_strings - func to print strings
*@separator: const char
*@n: const unsigned int
*Return: Void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(args, char *);
		if (p != NULL)
			printf("%s", p);
		else
			printf("(nil)");
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
