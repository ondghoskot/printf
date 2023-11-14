#include "main.h"

/**
 * get_print_x - selects the right print function depending on the specifier
 * @format: string containing the specifier
 * Return: pointer to the right print function
 */
int (*get_print_x(char *format))(char *format, va_list)
{
	int i;

	print_x getfnc[] = {
		{"%c", print_c},
		{"%s", print_s},
		{"%%", print_mod},
		{NULL, NULL}
	};

	if (format[1] == ' ' || format[1] == '\0')
		return (NULL);
	for (i = 0; getfnc[i].specifier; i++)
	{
		if (format[1] == getfnc[i].specifier[1])
			return (getfnc[i].fnc);
	}
	return (NULL);
}
