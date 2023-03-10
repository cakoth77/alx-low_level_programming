#include <stdio.h>
/**
 * _strlen - Returns the length of a string
 * @str: The strin to get the length of
 * Return: The length of @str.
 */
size_t _strlen(const char *str)
{
size_t length = 0;
while (*str++)
length++;
return (length);
}
