#include "main.h"

/**
 * _isupper - check upper cases
 * @c: char to check
 * Return: if upper return 1, else return 0
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
