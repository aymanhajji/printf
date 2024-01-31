#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _printf - return the number of characters printed
 * @format: pointer to character string
 * @...: variable number of arguments
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list argsDest;
	char *str;
	int count;

	va_start(argsDest, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;    // I go to the character next to % like '%c' with this line I point to the 'c'
			if (*format == 'c')
			{
				count++;   // Incrementing the counter when printing the character
				_putchar(va_arg(argsDest, int));
			}
			else if (*format == 's')
			{
				str = va_arg(argsDest, char *);
				while (*str != '\0')
				{
					_putchar(*str);
					str++;     // Goes to the next character of the string
					count++;   // We count the number of characters printed
				}
			}
			else if (*format == '%')
			{
				_putchar('%');
				count++;
			}
		}
		else
		{
			count++;
			_putchar(*format);
		}
		format++;
	}
	va_end(argsDest);
	return (count);
}
