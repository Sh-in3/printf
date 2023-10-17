#include <stdio.h>

/**
 * _printf - a function that does whats printf do.
 * printf - Printf function
 *
 * @format: format
 * Return: no of characters printed
 */

int _printf(const char *format, ...)
{
va_list args;
va_start(args, format);

while (*format != '\0')
{
if (*format == '%' && (*(format + 1) == 'd' || *(format + 1) == 'i'))
{
int num = va_arg(args, int);
printf("%d", num);
format += 2;
}
else
{
putchar(*format);
format++;
}
}
va_end(args);


/**
 * main - check the code.
 * Return: 0
 */
int main(void)
{
int num = 42;
return (0);
}
