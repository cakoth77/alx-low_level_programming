#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */
int *array_range(int min, int max)
{
int *ar, i = 0;
if (min > max)
return (0);
ar = malloc((max - min + 1) * sizeof(int));
if (!ar)
return (0);
while (i <= max - min)
ar[i++] = min++;
return (ar);
}
