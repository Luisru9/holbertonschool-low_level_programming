#include "main.h"

/**
 * _islower - Entry point
 * Description: checks for lowercase
 * character.
 * @c: char to be checked.
 * Return: 1
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
