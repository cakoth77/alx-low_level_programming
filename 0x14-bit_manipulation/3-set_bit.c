#include "main.h"
/**
 * set_bit - sets value of a bit to 1 at given index
 * @index: index to set value at
 * @n: bit
 * Return: if it worked 1
 *         otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int bit;
if (index > 63)
return (-1);
bit = 1 << index;
*n = (*n | bit);
return (1);
}
