#include "main.h"
/**
 * clear_bit - sets value of a bit to 0
 * @index: index of bit
 * @n: pointer of unsigned long int
 * Return: 1 if it worked, -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int bit;
if (index > 63)
return (-1);
bit = 1 << index;
if (*n & bit)
*n ^= bit;
return (1);
}
