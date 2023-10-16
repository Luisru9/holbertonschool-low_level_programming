#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Retur :Always 0 (Success)
 */

int main(void)

{

	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
	putchard('\n');

	return (0);
}
