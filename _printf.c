#include "main.h"

/**
 * _printf - a function that does what printf does
 *
 * @format: pointer to a string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int chara_print = 0;

	va_list args; /* list of arguments (after the string[format]) */

	if (format == NULL)
		printf("main.c")
		return (-1); /* returns error if string is NULL */

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1); /* if no % sign, write to the standard output */
			chara_print++;
		}

		else
		{
			format++; /* check the next string if there is a % sign*/

		if (*format == '\0')
			break;

		else if (*format == 'c')
		{
			char c = va_arg(args, int);

			write(1, &c, 1);
			chara_print++;
		}

		else if (*format == 's')
		{
			char *str = va_arg(args, char*);
			int str_len = 0;

			while (str[str_len] != '\0')
				str_len++; /* calculate length of string */

			write(1, str, str_len);
			chara_print += str_len; /* write to the standard output */
		}

		else if (*format == '%')
		{
			write(1, format, 1);
			chara_print++;
		}
		}
		format++;
	}

	va_end(args);
	return (chara_print);
}
