#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate to s1
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i = 0, len1 = 0, len2 = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0')
{
len2++;
}
if (n > len2)
n = len2;
s = malloc(sizeof(char) * (len1 + n + 1));
if (!s)
return (NULL);
for (i = 0; i < len1; i++)
{
s[i] = s1[i];
}
for (; i < (len1 + n); i++)
{
s[i] = s2[i - len1];
}
s[i] = '\0';
return (s);
}
