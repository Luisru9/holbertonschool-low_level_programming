#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - return number of element
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)

{
size_t num = 0;
while (h)

{
num++;
h = h->next;

}

return (num);
}
