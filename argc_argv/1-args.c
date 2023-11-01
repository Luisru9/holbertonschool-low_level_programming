#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * this finction prints char from first command
 *
 * @argc: number of command
 * @argv: array of command
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])

{
	(void) argv;

	printf("%d\n", argc - 1);

		return (0);
}
