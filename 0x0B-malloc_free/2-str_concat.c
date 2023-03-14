#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *  _strlen - count array
 * @s: array of elements
 * Return: i
 */
int _strlen(char *s)
{
unsigned int i;
i = 0;
while (s[i] != '\0') /*Count character of string*/
{
i++;
}
return (i);
}

/**
 * str_concat - back a pointer to array
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 * Return: Always an array dinamic
 */
char *str_concat(char *s1, char *s2)
{
char *dst;
unsigned int i, j, size;
/*If the array is empty*/
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
/*count size total*/
size = (_strlen(s1) + _strlen(s2) + 1);
/*malloc*/
dst = (char *) malloc(size *sizeof(char));
if (dst == 0)
{
return (NULL);
}
/*Concatenates arrays*/
for (i = 0; *(s1 + i) != '\0'; i++)
*(dst + 1) = *(s1 + i);
for (j = 0; *(s2 + j) != '\0'; j++)
{
*(dst + i) = *(s2 + j);
i++;
}
return (dst);
}
