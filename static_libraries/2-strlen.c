#include "main.h"

/**
 * _strlen - Entry point
 * Description:"In README.md"
 * @s:"var type char."
 * Return: int
 */

int _strlen(char *s)

{

	int stle;

	stle = 0;
	while (s[stle] != '\0')
	{
		stle++;
	}
	return (stle);
}
