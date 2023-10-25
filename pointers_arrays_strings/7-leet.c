#include "main.h"

/**
 * leet - encodes a string to 1337.
 * @gri: The string to be encoded
 *
 * Return: a pointer to encode the string.
 */

char *leet(char *gri)
{
	int trix1 = 0, trix2;
	char leet[8] = {'0', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (gri[trix1])
	{
		for (trix2 = 0; trix2 <= 7; trix2++)
		{
			if (gri[trix1] == leet[trix2] || gri[trix1 - 32 == leet[trix2])
				gri[trix1] = trix2 + '0';
		}
		trix1++;
	}
	return (gri);
}
