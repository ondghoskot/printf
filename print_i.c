#include "main.h"

/**
 * print_i - prints integer to the stdout
 * @ls: va_list of arguments
 * Return: numbers of characters printed
 */
int print_i(va_list ls)
{
	int n = va_arg(ls, int);
	int num, u, d, exp;
	int i = 1;

	u = n % 10;
	exp = 1;
	n /= 10;
	num = n;
	if (u < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		u = -u;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp *= 10;
			num /= 10;
		}
		num = n;
		while (exp > 0)
		{
			d = num / exp;
			_putchar(d + '0');
			num -= (d * exp);
			exp /= 10;
			i++;
		}
	}
	_putchar(u + '0');
	return (i);
}
