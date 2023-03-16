#include "main.h"
/**
 * main - multiplies two positive numbers
 * @num1: n arguments
 * @num2: args
 * Return: int
 */
int main(int num1, char *num2[])
{
unsigned long mul;
int i, j;
if (num1 != 3)
{
printf("Error\n");
exit(98);
}
for (i = 1; i < num1; i++)
{
for (j = 0; num2[i][j] != '\0'; j++)
{
if (num2[i][j] > 57 || num2[i][j] < 48)
{
printf("Error\n");
exit(98);
}
}
}
mul = atol(num2[1]) * atol(num2[2]);
printf("%lu\n", mul);
return (0);
}
