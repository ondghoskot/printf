#include "main.h"

/**
 * _printf - prints formatted data to the standard output
 * @format: string that contains format to print
 * Return: number of characters entered
 */
int _printf(char *format, ...)
{
	int entered = 0, (*print_x)(char *format, va_list);
	va_list ls;
	char specifier[3];

	if (!format)
		return (-1);
	specifier[2] = '\0';
	va_start(ls, format);
	_putchar(-1);
	while (format[0])
	{
		if (format[0] == '%')
		{
			print_x = get_print_x(format);
			if (print_x)
			{
				specifier[0] = '%';
				specifier[1] = format[1];
				entered += print_x(specifier, ls);
			}
			else if (format[1] != '\0')
			{
				entered += _putchar('%');
				entered += _putchar(format[1]);
			}
			else
			{
				entered += _putchar('%');
				break;
			}
			format += 2;
		}
		else
		{
			entered += _putchar(format[0]);
			format++;
		}
	}
	_putchar(-2);
	return (entered);
}
