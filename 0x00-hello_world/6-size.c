#include <stdio.h>
/**
 * main - prints "The size of various types on
 * the computer it is compiled and run on"
 * Return 0 (Success)
 * /
int main(void)
{char a;
int b;
long int c;
long long int d;
float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)s
izeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)s
izeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned l
ong)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsig
ned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long
)sizeof(f));
return (0);
}
