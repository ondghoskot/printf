#include "main.h"

/**
 * print_c - prints a character to the stdout
 * @ls: va_list of characters to print
 * Return: number of characters to print
 */
int print_c(va_list ls)
{
	char c;

	c = va_arg(ls, int);
	_putchar(c);
	return (1);
}
