#include "main.h"

/**
 * _print_rev_recursion - Reverse a string
 * @s: The string to be modified
 * Return: void
 */

void _print_rev_recursion(char *s)

{

	int len = 0, index = 0;
	char tmp;

	while (s[index++])
		len++;
	for (index = len -1; index >= len / 2; index--)
	for (index = len - 1; index >= len / 2; index--)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tmp;
	}
}
