#include "main.h"
#include <stdio.h>
/**
 * print_binary - Prints the binary representation of a number
 * @n: unsigned long int
 * Return: no return
 */
void print_binary(unsigned long int n)
{
int bi, count = 0;
unsigned long int pre;
for (bi = 63; bi >= 0; bi--)
{
pre = n >> bi;
if (pre & 1)
{
printf(" '1' \n");
count++;
}
else if (count)
printf(" '0' \n");
}
if (!count)
printf(" '0' \n");
}

