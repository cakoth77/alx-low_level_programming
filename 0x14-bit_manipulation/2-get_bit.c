#include "main.h"
/**
 * get_bit - Prints the value of a bit at a given index
 * @index: index of bit
 * @n: bit
 * Return: the value of bit at index
 *         otherwise if an error occurs - -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit;
if (index > 63)
return (-1);
bit = (n >> index) & 1;
return (bit);
}
