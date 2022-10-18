#include "main.h"

/**
 * str_len - get length of a string
 * @str: string
 *
 * Return: length of the string
 */

unsigned int str_len(const char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * print_str - prints a string
 * @str: string
 *
 * Return: number of characters printed to stdout
 */


int print_str(const char *str)
{
	unsigned int count, length = 0;
	unsigned int len = str_len(str);

	for (count = 0; count < len; count++)
		length += write(1, &str[count], 1);
	return (length);
}

/**
 * print_char - prints a character to stdout
 * @c: character
 *
 * Return: number of characters printed to stdout
 */

int print_char(char c)
{
	return (write(1, &c, 1));
}

