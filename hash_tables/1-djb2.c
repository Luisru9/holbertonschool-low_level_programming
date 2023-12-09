#include "hash_tables.h"

/**
 * hash_djb2 - hash function algorith
 * @str: string input
 * Return: return hash info
*/

unsigned ling int hash_djb2(const unsigned char *str)

{
unsigned long int hash;
int y;
hash = 5381;
while ((y = *str++))
{
hash = ((hash << 5) + hash) +y;
}
return (hash);
}
