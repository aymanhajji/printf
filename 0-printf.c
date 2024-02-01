#include <stdarg.h>
#include <stdio.h>
#include "main.h"
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
	if (*format == NULL)
	{
		return (-1);
	}
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				count++;
				_putchar(va_arg(argsDest, int));
			}
			else if (*format == 's')
			{
				str = va_arg(argsDest, char *);
				while (*str != '\0')
				{
					_putchar(*str);
					str++;
					count++;
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

