#include "main.h"

#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from o to 98
 * @o: The number to start printing from
 * Return: Always 0.
 */

void print_to_98(int o)

{
	if (o <= 98)
	{
		for (; o <= 98; o++)
		{
			if (o == 98)
			{
				printf("%d", o);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", o);
			}
		}
	}
	else
	{
		for (; o >= 98; o--)
		{
			if (o == 98)
			{
			printf("%d", o);
			printf("\n");
			break;
		}
		else
		{
			printf("%d, ", o);
		}
		}
	}
}
