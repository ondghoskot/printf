#include "main.h"

/**
 * print_s - prints string to stdout
 * @ls: va_list of strings to print
 * Return: number of characters printed (length of string)
 */
int print_s(va_list ls)
{
	char *str;
	int i, len;

	len = 0;
	str = va_arg(ls, char *);
	if (!str)
		str = "(null)";
	for (len = 0; str[len] != '\0'; len++)
		;
	for (i = 0; i < len; i++)
		_putchar(str[i]);
	return (len);
}
