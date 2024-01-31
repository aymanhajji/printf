#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.hi>
/**
 * _printf - return the number of characters printed
 * @format: pointer to character string
 * @...: variable number of arguments
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list argsSrc;
	va_list argsDest;
	char *str;
	int count;

	va_start(argsSrc, format);
	va_copy(argsDest, argsSrc);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;    // I go to the character next to % like '%c' with this line I point to the 'c'
			if (*format == 'c')
			{
				count++;   // Incrementing the counter when printing the character
				putchar(va_arg(argsDest, int));
			}
			if (*format == 's')
			{
				str = va_arg(argDest, char *);
				while (*str)
				{
					putchar(*str);
					str++;     // Goes to the next character of the string
					count++;   // We count the number of characters printed
				}
			}
		}
		else
		{
			count++;
			putchar(*format);
		}
		format++;
	}
	va_end(argsDest);
	va_end(argsSrc);
	return (count);
}
