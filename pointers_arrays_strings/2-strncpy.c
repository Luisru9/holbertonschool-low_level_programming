#include "main.h"

/**
 * _strncpy - Copies of a string
 * @dest: The buffer storing
 * @src: The source string
 * @v: the maximum number
 * Return: A pointer to the result
 */

char *_strncpy(char *dest, char *src, int v)

{

	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < v; index++)
		dest[index] = src[index];

	for (index = src_len; index < v; index++)
		dest[index] = '\0';

	return (dest);
}
