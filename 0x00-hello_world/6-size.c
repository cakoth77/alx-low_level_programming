#include <stdio.h>
/**
 * main - The size of the various types on
 * the computer it is compiled and run on
 * Return 0 (Success)
 * */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %zu byte(s)\n", (unsigned long)
sizeof(a));
printf("Size of an int: %zu byte(s)\n", (unsigned long)
sizeof(b));
printf("Size of a long int: %zu byte(s)\n", (unsigned l
ong)sizeof(c));
printf("Size of a long long int: %zu byte(s)\n", (unsig
ned long)sizeof(d));
printf("Size of a float: %zu byte(s)\n", (unsigned long
)sizeof(f));
return (0);
}
