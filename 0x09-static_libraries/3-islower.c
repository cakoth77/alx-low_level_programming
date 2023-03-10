#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _islower - check for lowercase character
 * @c : character to check the case
 * Return: 0 or 1
 */
int _islower(int c)
{
return (c >= 'a' && c <= 'z');
}
