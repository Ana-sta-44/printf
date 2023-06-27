#include "main.h"

/**
 * print - function to write 1 character to the standard output
 * @c: character to be written to the standard out
 * Return: number of character in byte written to the standard out
 */

int print(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - function to print string to standard output
 * @s: string to be printed to standard output
 * Return: byte size taken by the string to be printed
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


/**
 * print_digit - function to print digits of an integer
 * @num: integer to be printed
 * Return: no return value expected
 */

void print_digit(int num)
{
	int n;

	if (num == 0)
		return;
	n = num / 10;
	print_digit(n);
	print(num % 10 + '0');
}


/**
 *print_num - prints integer while returning it char count
 *@num: number to be printed and character counted and returned
 *Return: count of number of characters in integer
 */

int print_num(int num)
{
	/*counts number of digits in num*/
	int rv = 0, m = num;

	while (m != 0)
	{
		m = m / 10;
		rv += 1;
	}

/*prints the digits*/
	print_digit(num);

	return (rv);

}
