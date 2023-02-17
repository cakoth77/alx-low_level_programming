#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - prints the alphabet in lowercase
 * Return: 0.
 */
int main(void)
{
char c;
char d;
c = 'a';
d = 'A';
while
        (c <= 'z'){
                putchar(c);
                c++;
        }
while
	(d <= 'Z'){
		putchar(d);
		d++;
	}
putchar('\n');
return (0);
}
