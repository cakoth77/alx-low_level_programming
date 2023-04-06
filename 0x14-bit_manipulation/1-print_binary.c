#include "main.h"
/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary
 */
void print_binary(unsigned long int n)
{
int x, count = 0;
unsigned long int curr;
for (x = 63; x >= 0; x--)
{
curr = n >> x;
if (curr & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}
