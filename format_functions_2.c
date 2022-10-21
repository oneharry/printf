#include "main.h"

/**
 * format_c - formats the specifier c
 *@arg: argument
 *
 * Return: returns the number of character printed
 */
int format_c(va_list arg)
{
	_putchar(va_arg(arg, int));
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
	for (i = 0; str_value[i] != '\0'; str_value++)
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
	int int_value;
	int a[20];
	int i;

	int_value = va_arg(arg, int);

	for (i = 0; int_value > 0; i++)
	{
		a[i] = int_value % 2;
		int_value = int_value / 2;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(a[i]);
	}
	return (i);
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
	int *j;

	int_value = va_arg(arg, int);
	j = &int_value;
	printf("%p", (void *)j);
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
	printf("%s", buffer);
	return (0);
}
