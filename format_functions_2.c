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
	if (int_value == 0)
	{
		return (-1);
	}
	else if (int_value != '\0')
	{
		_putchar(int_value);
	}
	return (int_value);
}

/**
 * format_s - formats the specifier s
 *@arg: argument
 *
 * Return: returns the string arg
 */
char format_s(va_list arg)
{
	char *str_value;

	for (str_value = va_arg(arg, char *); *str_value; str_value++)
		if (str_value == NULL)
		{
			printf("%s", "(null)");
		}
		else if (*str_value != '\0')
		{
			_putchar(*str_value);
		}
	return (*str_value);
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
	return (a[i]);
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
