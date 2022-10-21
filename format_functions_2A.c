#include "main.h"

/**
 * format_c - formats the specifier c
 *@arg: argument
 *
 * Return: returns the number of character printed
 */
int format_c(va_list arg)
{
	int j;

	j = va_arg(arg, int);
	if (j == 0)
		return (-1);
	if (j != '\0')
	{
		_putchar(j);
	}
	return (1);
}

/**
 * format_s - formats the specifier s
 *@arg: argument
 *
 * Return: returns the number of chaacters printed
 */
int format_s(va_list arg)
{
	char *str_value;
	int i;

	str_value = va_arg(arg, char *);

	if (str_value == NULL)
		str_value = "(null)";
	for (i = 0; str_value[i] != '\0'; i++)
		_putchar(str_value[i]);
	return (i);
}

/**
 * format_b - formats the specifier b
 *@arg: argument
 *
 * Return: returns the binary of arg
 */
int format_b(va_list arg)
{
	int int_value, i, count = 0;
	int a[20];

	int_value = va_arg(arg, int);
	for (i = 0; int_value > 0; i++)
	{
		a[i] = int_value % 2;
		int_value = int_value / 2;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(a[i]);
		count++;
	}
	return (count);
}

/**
 *format_p - formats the p specifier
 *@arg: argument
 *
 *Return: prints the address of arg
 */
int format_p(va_list arg)
{
	int int_value;

	int_value = va_arg(arg, int);
	_putchar(*(unsigned char *)&int_value);
	return (0);
}

/**
 *format_R - function formats the R specifier
 *@arg: argument
 *
 * Return: prints the string version of input
 */
int format_R(va_list arg)
{
	int int_value;
	char buffer[50];

	int_value = va_arg(arg, int);
	sprintf(buffer, "%d", int_value);
	puts(buffer);
	return (0);
}
