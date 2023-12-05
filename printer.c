#include "main.h"

/**
 * printer - the function name that prints the characters
 * @format: the format specifier
 * @argument: an array of characters
 * @args: the arguments to a function
 * Return: count
 */

int printer(const char *format, print_type argument[], va_list args)
{
        int count = 0;
        int j;

        while (*format != '\0')
        {
                if (*format == '%')
                {

                        format++;

                        for (j = 0; argument[j].parameter != NULL; j++)
                        {
                                if (*format == *argument[j].parameter)
                                {
                                        count += argument[j].f(args);
                                        break;
                                }
                        }
                        if (argument[j].parameter == NULL)
                        {
                                putchar('%');
                                count++;
                        }
                }
                else

                {
                        putchar(*format);
                        count++;
                }
                format++;
        }
        return (count);
}
