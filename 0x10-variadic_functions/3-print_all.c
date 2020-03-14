#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_all - function that prints anythings
*@format: const
*Return: void
*/
void print_all(const char * const format, ...)
{
	int i = 0, def;
	char *str;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		while (format[i])
		{
			def = 1;
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						printf("(nil)");
					printf("%s", str);
					break;
				default:
					def = 0;
					break;
			}
			i++;
			if (def == 1 && format[i])
				printf(", ");
		}
		va_end(args);
	}
	printf("\n");
}
