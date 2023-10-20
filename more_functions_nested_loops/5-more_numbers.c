#include "main.h"

/**
 * more_numbers - Print 10 times the numbers since 0 up to 14
 * Return 10 times of the numbers since 0 up to 14
 */

void more_numbers(void)
{
	int i, j, k, doubleDigit;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i < 10)
			{
				_putchar(i + '0');
			}
			else
			{
				for (k = 0; k < 2; k++)
				{
					if (k == 0)
						doubleDigit = i / 10;
					else
						doubleDigit = i % 10;
					_putchar(doubleDigit + '0');
				}
			}
		}
		_putchar('\n');
	}
}
