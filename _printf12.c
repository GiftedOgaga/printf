#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf-A function that works works exactly like
 * @format: a constant pointer to constant characters
 * @...:Remaining Arguments after format
 * Return: pointer to char
 */

int _printf(const char *format, ...)
{
	int i, k = 0;
	char *str = NULL;
	va_list args;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else
		{
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(args, int));
				i++;
			}
			else if (format[i + 1] == 's')
			{
				i++;
				str = va_arg(args, char*);
				while (str[k] != '\0')
				{
					_putchar(str[k]);
					k++;
				}
			}
			else if (format[i + 1] == '%')
			{
				_putchar(format[i]);
				i++;
			}
		}
	}
}


