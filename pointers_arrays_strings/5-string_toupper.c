#include "main.h"

/**
 * string_toupper - Change all lowercase
 * @str: the string to changed
 * Return: a pointer to change string
 */

char *string_toupper(char *str)

{

	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
