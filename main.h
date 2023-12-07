#ifndef main_h
#define main_h

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct - a structure
 */

typedef struct
{
	const char *parameter;
	int (*f)(va_list);
} print_type;

int _printf(const char *format, ...);
int _putchar(char c);
int _print_char(va_list args);
int _print_string(va_list args);
int _print_percent(va_list args);
int _print_integer(va_list args);
int printer(const char *format, print_type argument[], va_list args);
#endif
