#include "cal.h"
#include <stdio.h>
#include <stdlib.h>
/**
*get_op_func - function to get operator
*@s: the operator
*Return: pointer to the function that corresponds the operator
*/
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t legitOPs[] = {
		{"+", op_add},
		{"-", op_sub},
		{"/", op_div},
		{"*", op_mul},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 5)
	{
		if (*s == *legitOPs[i].op)
			return (legitOPs[i].f);
		i++;
	}
	return (NULL);
}
