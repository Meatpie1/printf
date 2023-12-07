#include "main.h"

/**
 * _printf - function that replicates what printf does
 * @format: a character string
 *
 * Return:  the number of characters printed
 */

int _printf(const char *format, ...)
{

	print_type argument[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"%", _print_percent},
		{"d", _print_integer},
		{"i", _print_integer},
		{NULL, NULL}
	};
	va_list arg;
	int count_var = 0;

	va_start(arg, format);
	count_var = printer(format, argument, arg);
	va_end(arg);
	return (count_var);
}
