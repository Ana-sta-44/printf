#include "main.h"

/**
 * print - function to write 1 character to the standard output
 * @c: character to be written to the standard output
 * Return: number of character in byte written to the standard output
 */
int print(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - Function to print string to standard output
 * @s: String to be printed to standard output
 * Return: Byte size taken by the string to be printed
 */

int print_string(char *s)
{
	int rv = 0, i = 0;

	if (s)
	{
		while (s[i])
		{
			print(s[i]);
			rv += 1;
			i++;
		}
	}

	return (rv);
}
