#include <stdio.h>
/**
 * main - prints all possible combinations of
 * single digit numbers
 * Return: Always 0.
 */
int main(void)
{
int a = 0;
int b;
int c;
int a2 = 0;
int b2;
int c2;
while (a <= 98)
{
b = ((a / 10) + '0');
c = ((a % 10) + '0');
while (a2 <= 99)
{
b2 = ((a2 / 10) + '0');
c2 = ((a2 % 10) + '0');
if (a < a2)
{
putchar(b);
putchar(c);
putchar(' ');
putchar(b2);
putchar(c2);
if (a != 98)
{
putchar(',');
putchar(' ');
}
}
a2++;
}
a++;
}
putchar('\n');
return (0);
}
