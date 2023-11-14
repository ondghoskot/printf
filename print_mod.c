#include "main.h"

/**
 * print_mod - prints '%'
 * @ls: va_list of empty arg (non-used)
 * Return: 1 (character printed)
 */
int print_mod(char *format, va_list ls)
{
	(void)ls;
	(void)format;

	_putchar('%');
	return (1);
}
