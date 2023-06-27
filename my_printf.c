#include "main.h"

/**
 * _printf - stardard printf replica
 * @format: strings passed to the function
 * Return: number of characters printed
 */


int _printf(const char *format, ...)
{
	int i = 0, rv = 0;
	va_list args;

	va_start(args, format);

	while (format[i])
	{
		if (format[i] != '%')
		{
			print(format[i]);
			rv += 1;
		}
		else if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				rv += print(va_arg(args, int));
				i++;
			}
			else if (format[i + 1] == 's')
			{
				rv += print_string(va_arg(args, char *));
				i++;
			}
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				rv += print_num(va_arg(args, int));
				i++;
			}
			else if (format[i + 1] == '%')
			{
				rv += print('%');
				i++;
			}
		}
		i++;
	}
	return (rv);
}

