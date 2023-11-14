#include "main.h"

/**
 * print_c - prints a character to the stdout
 * @ls: va_list of characters to print
 * Return: number of characters to print
 */
int print_c(char *format, va_list ls)
{
	(void)format;

	_putchar(va_arg(ls, int));
	return (1);
}
