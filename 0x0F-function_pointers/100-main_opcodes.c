#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int bytes, i;
int (*arr)(int, char **) = main;
unsigned char opcode;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
exit(2);
}
for (i = 0; i < bytes; i++)
{
opcode = *(unsigned char *)arr;
printf("%.2x", opcode);
if (i == bytes - 1)
continue;
printf(" ");
arr++;
}
printf("\n");
return (0);
}
