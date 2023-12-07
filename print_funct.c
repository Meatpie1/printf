#include "main.h"

/**
 * _print_char - the function name to print characters
 * @args: the function parameter
 * Return: Always 1
 */

int _print_char(va_list args)
{
	char c = va_arg(args, int);

	putchar(c);
	return (1);
}

/**
 * _print_string - the function name to print string
 * @args: the function parameter
 * Return: Always count
 */

int _print_string(va_list args)
{
	char *s = va_arg(args, char*);
	int count = 0;

	while (*s != '\0')
	{
		putchar(*s);
		s++;
		count++;
	}
	return (count);
}

/**
 * _print_percent - the function name to print the percent specifier
 * @args: the function parameter
 * Return: Always 1
 */

int _print_percent(va_list args)
{
	(void)args;

	putchar('%');
	return (1);
}

/**
 * _print_integer - the function name to print integer
 * @args: the function parameter
 * Return: count
 */

int _print_integer(va_list args)
{
	int count = 0;
	int i;
	char str[20];
	int num = va_arg(args, int);

	snprintf(str, sizeof(str), "%d", num);

	for (i = 0; str[i] != '\0'; ++i)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}
