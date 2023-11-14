#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct format
{
	char *sp;
	int (*fc)();
} match;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list ls);
int print_s(va_list ls);
int print_mod(void);


#endif
