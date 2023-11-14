#include "main.h"

/**
 * print_s - prints string to stdout
 * @ls: va_list of strings to print
 * Return: number of characters printed (length of string)
 */
int print_s(va_list ls)
{
	char *str = va_arg(strs, char *);
	int len = 0;
	unsigned int i, j;

	if (!str)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		len++;
	for (j = 0; j < len; j++)
		_putchar(str[j]);
	return (len);
}
