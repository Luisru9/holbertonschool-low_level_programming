#include "main.h"
/**
 * leet - a function that encodes a string into 1337.
 * @von: string to be encoded.
 * Return: a pointer of the string encoded.
 */
char *leet(char *von)
{
	char *tmp = von;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*von)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*von == key[i] || *von == key[i] + 32)
			{
				*von = value[i] + '0';
			}
		}
		von++;
	}
	return (tmp);
}
