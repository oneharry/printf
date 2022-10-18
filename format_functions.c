#include "main.h"
/**
  * format_di - formats integer
  * @arg: argument
  * Return: integer
  */
int format_di(va_list arg)
{
	int x;
	char *str;

	x = va_arg(arg, int);
	str = malloc(10);
	if (str == NULL)
		return (-1);
	sprintf(str, "%d", x);
	write(1, str, _strlen(str));
	free(str);

	return (0);
}

/**
  * format_o - format octadecima
  * @arg: argument
  * Return: 0 for succcess
  */
int format_o(va_list arg)
{
	unsigned int x;
	char *str;

	x = va_arg(arg, unsigned int);
	str = (convert(x, 8));
	write(1, str, strlen(str));
	return (0);
}

/**
  * format_u - format unnsigned int
  * @arg: argument
  * Return: returnint
  */
int format_u(va_list arg)
{
	int x;
	char *str;

	x = va_arg(arg, unsigned int);
	str = malloc(10);
	if (str == NULL)
		return (-1);
	else
	{
		sprintf(str, "%u", x);
		write(1, str, _strlen(str));
		free(str);
	}

	return (0);
}
/**
  * format_x - format for %x
  * @arg: argument
  * Return: 0
  */
int format_x(va_list arg)
{
	int x;
	char *str;

	x = va_arg(arg, unsigned int);
	str = (convert(x, 16));
	write(1, str, strlen(str));

	return (0);
}
/**
  * format_X - formats for cap X
  * @arg: variable argument
  * Return: 0
  */
int format_X(va_list arg)
{
	unsigned int x, i;
	char *str;

	x = va_arg(arg, unsigned int);
	str = (convert(x, 16));
	for (i = 0; *(str + i); i++)
	{
		if (*(str + i) >= 'A' && *(str + i) <= 'F')
			*(str + i) = (*(str + i) + 32);
		write(1, str, strlen(str));
	}
	return (0);
}
