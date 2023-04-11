#include "main.h"
/**
 * get_endiannes - check endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
int nu = 1;
char *endian = (char *)&nu;
if (*endian == 1)
return (1);
return (0);
}
