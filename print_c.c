#include "main.h"

/**
 * print_c - prints a character to the stdout
 * @ls: va_list of characters to print
 * Return: number of characters to print
 */
int print_c(va_list ls)
{
	_putchar(va_arg(chars, int));
	return (1);
}
