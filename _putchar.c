#include <unistd.h>

/**
 * _putchar - prints character from ASCII table
 * @c: character to print
 * Return: the equivalent of c in ASCII
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
