#include "main.h"
/**
 * binary_to_uint - convert binary number to unsigned int
 * @b: string containing the binary number
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
int x;
unsigned int bin = 0;
if (!b)
return (0);
for (x = 0; b[x]; x++)
{
if (b[x] < '0' || b[x] > '1')
return (0);
bin = 2 * bin + (b[x] - '0');
}
return (bin);
}
