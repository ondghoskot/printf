#include "main.h"

/**
 * _printf - prints formatted data to the standard output
 * @format: string that contains format to print
 * Return: number of characters entered
 */
int _printf(const char *format, ...)
{
	match getfc[] = {
		{"%c", print_c},
		{"%s", print_s},
		{"%%", print_mod}
	};

	va_list ls;
	int j;
	int len = 0, i = 0;

	va_start(ls, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		j = 2;
		while (j >= 0)
		{
			if (getfc[j].sp[0] == format[i] && getfc[j].sp[1] == format[i + 1])
			{
				len += getfc[j].fc(ls);
				i += 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(ls);
	return (len);
}
