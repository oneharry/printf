#include "main.h"

/**
 * format_c - formats the specifier c
 *@arg: argument
 *
 * Return: returns the character arg
 */
int format_c(va_list arg)
{
	int int_value;

	int_value = va_arg(arg, int);
	printf("%c", int_value);
	return (0);
}

/**
 * format_s - formats the specifier s
 *@arg: argument
 *
 * Return: returns the string arg
 */
int format_s(va_list arg)
{
	const char *str_value;

	for (str_vale = va_arg(arg, char *); *str_value; str_value++)
		putchar(*str_value);
	return (0);
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
		printf("%d", a[i]);
	}
	return (0);
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
