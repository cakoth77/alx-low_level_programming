#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */
int *array_range(int min, int max)
{
int range, i;
int *ar;
range = 0;
if (min > max)
return (0);
range = ((max + 1) - min);
ar = malloc((max - min + 1) * sizeof(int));
if (!ar)
return (0);
for (i = 0; i < range; i++)
{
*(ar + i) = min + i;
}
return (ar);
}
