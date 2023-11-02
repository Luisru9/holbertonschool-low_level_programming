#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the sum of arg positive num
 * @argv: the vector argument
 * @argc: the count of argument number
 * Return: always 0
 */

int main(int argc, char *argv[])

{
	int p;
	unsigned int s, sum = 0;
	char *r;

	if (argc > 1)
	{
		for (p = 1; p < argc; p++)
		{
			r = argv[p];

			for (s = 0; s < strlen(r); s++)
			{
				if (r[s] < 48 || r[s] > 57)
				{
					printf("error\n");
					return (1);
				}
			}
			sum += atoi(r);
			r++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
