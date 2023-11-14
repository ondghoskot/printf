#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct print_format - structure for the print format (specifier + fnc)
 * @specifier: set of two characters that determine the data type to print
 * @fnc: corresponding print function
 */
typedef struct print_format
{
	char *specifier;
	int (*fnc)(va_list);
} print_x;

int _printf(const char *format, ...);
int (*get_print_x(char *format))(va_list);

int _putchar(char c);
int print_c(va_list ls);
int print_s(va_list ls);
int print_mod(va_list ls);


#endif
