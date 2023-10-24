#include "main.h"

/**
 * _strncat - Concanates tow strings using a most
 * an imputted number of bytes from src.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest
 * @d: The number of bytes from src to be appended to dest.
 * Return: a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int d)

{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < d; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
