#include <unistd.h>

/**
 * main - prints putchar
 * Return: Always 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
