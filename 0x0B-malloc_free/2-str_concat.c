#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *  _strlen - count array
 * @s: array of elements
 * Return: 1
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
 * str_concat - Concatenates two strings of any size
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 * Return: the two strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
char *s;
unsigned int i, j, size;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
size = (_strlen(s1) + _strlen(s2) + 1);
dst = (char *) malloc(size *sizeof(char));
if (s == 0)
{
return (NULL);
}
for (i = 0; *(s1 + i) != '\0'; i++)
*(s + 1) = *(s1 + i);
for (j = 0; *(s2 + j) != '\0'; j++)
{
*(s + i) = *(s2 + j);
i++;
}
return (s);
}
