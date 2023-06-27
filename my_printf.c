#include "main.h"

/**
 * _printf - The printf function
 * @format: The format
 * by harrybuild and chisom chisom
 * Return: The printed characters.
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
				print(va_arg(args, int));
				rv += 1;
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
