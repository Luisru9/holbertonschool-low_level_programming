#include "main.h"
#include <stdio.h>

/**
 * _strstr - entry point
 * @haystack: input
 * @needle: input
 * Return: always 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *may = haystack;
		char *june = needle;

		while (*may == *june && *june != '\0')
		{
			may++;
			june++;
		}
		if (*june == '\0')
			return (haystack);
	}
	return (NULL);
}
