#include "holberton.h"
/**
*string_toupper - convert strings to uppercase
*@ch: pointer type char
*Return: char
*/
char *string_toupper(char *ch)
{
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
		{
			ch[i] = ch[i] - 32;
		}
	}
return (ch);
}
