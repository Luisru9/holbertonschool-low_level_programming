#include <stdio.h>

/**
 * _isupper - Entry point
 * Description:"checks for uppercase character."
 * @c: int to be checked
 * Return: 1
 */

int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
