#include "variadic_functions.h"
/**
 * print_c - Print a character and handle the separator.
 */
void print_c(va_list args, int *c_flag)
{
if (*c_flag)
printf(", ");
printf("%c", va_arg(args, int));
*c_flag = 1;
}
/**
 * print_i - Print an integer and handle the separator.
 */
void print_i(va_list args, int *c_flag)
{
if (*c_flag)
printf(", ");
printf("%d", va_arg(args, int));
*c_flag = 1;
}

void print_f(va_list args, int *c_flag)
{
if (*c_flag)
printf(", ");
printf("%f", va_arg(args, double));
*c_flag = 1;
}

void print_s(va_list args, int *c_flag)
{
char *str = va_arg(args, char *);
if (*c_flag)
printf(", ");
if (!str)
printf("(nil)");
else
printf("%s", str);
*c_flag = 1;
}

void print_all(const char * const format, ...)
{
va_list valist;
unsigned int i = 0;
int c_flag = 0;

va_start(valist, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
print_c(valist, &c_flag);
break;
case 'i':
print_i(valist, &c_flag);
break;
case 'f':
print_f(valist, &c_flag);
break;
case 's':
print_s(valist, &c_flag);
break;
}
i++;
}

printf("\n");
va_end(valist);
}

