#include "main.h"

/**
 * print_binary - converts decimal to binary
 * @num: number
 *
 * Return: number of characters printed
 */

int print_binary(int num)
{
	int quotient, remainder, len = 0;

	if (num == 0)
		return (len);
	quotient = num / 2;
	remainder = num % 2;
	len += print_binary(quotient);
	print_char(remainder + 48);
	len++;
	return (len);
}
