include <stdio.h>
/**
 * main - Prints the size of the various types on
 * the computerit is compiled and run on.
 * Return: Always 0.
 */
int main(void)
{printf("Size of a char: %zu byte(s)\n", sizeof
(char));
printf("Size of an int: %zu byte(s)\n", sizeof
(int));
printf("Size of a long int: %zu byte(s)\n", s
izeof(long int));
printf("Size of a long long int: %zu byte(s)
\n", sizeof(long long int));
printf("Size of a float: %zu byte(s)\n", si
zeof(float));
return (0);
}
