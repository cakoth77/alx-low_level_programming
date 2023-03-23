#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print anything
 * @format: a list of types of arguments passed to the function
 * Return: no return
 */
void print_all(const char * const format, ...)
{
va_list alis;
unsigned int i = 0;
char *str, *ar = "";
va_start(alis, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", ar, va_arg(alis, int));
break;
case 'i':
printf("%s%d", ar, va_arg(alis, int));
break;
case 'f':
printf("%s%f", ar, va_arg(alis, double));
break;
case 's':
str = va_arg(alis, char *);
if (!str)
str = "(nil)";
printf("%s%s", ar, str);
break;
default:
i++;
continue;
}
ar = ", ";
i++;
}
printf("\n");
va_end(alis);
}
}
