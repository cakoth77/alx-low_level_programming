#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *cop, *relloc;
unsigned int i;
if (ptr != NULL)
cop = ptr;
else
{
return (malloc(new_size));
}
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (0);
}
relloc = malloc(new_size);
if (relloc == NULL)
return (0);
for (i = 0; i < (old_size || i < new_size); i++)
{
*(relloc + i) = cop[i];
}
free(ptr);
return (relloc);
}
