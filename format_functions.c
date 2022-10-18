#include "main.h"
/**
  * format_di - formats integer
  * @arg: argument
  * Return: integer
  */
int format_di(va_list arg)
{
	int x, hold, count;

	x = va_arg(arg, int);
	if (x < 0)
	{
		_putchar('-');
		x = x * -1;
	} else
	{
		x = x;
	}
	hold = x;
	count = 1;

	while (hold > 9)
	{
		hold /= 10;
		count *= 10;
	}
	while (count >= 1)
	{
		_putchar(((x / count) % 10) + '0');
		count /= 10;
	}

	return (0);
}

/**
  * format_o - format octadecima
  * @arg: argument
  * Return: 0 for succcess
  */
int format_o(va_list arg)
{
	int x;
	char *str;

	x = va_arg(arg, int);
	str = (convert(x, 8));
	write(1, str, _strlen(str));
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
	if (str != NULL)
	{
		sprintf(str, "%u", x);
		write(1, str, _strlen(str));
		free(str);
	}

	return (0);
}
int format_x(va_list arg)
{
	int x;
	char *str;

	x = va_arg(arg, unsigned int);
	str = (convert(x, 16));
	write(1, str, _strlen(str));

	return (0);
}
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
		write(1, str, _strlen(str));
	}
	return (0);
}
int format_S(va_list arg)
{
	unsigned int i;
	char *str, *s;

	if (!isPrintable(*str))
	{
		s = convert(*str, 16);
		write(1, UNPR, 3);
		write(1, ZERO, 1);
		write(1, s, _strlen(s));
	} else
	{
		write(1, &(*str), 1);
	}
	return (0);
}
char *convert (unsigned int num, int base)
{
	static char Rep[] = "0123456789ABCDEF";
	static char buf[50];
	char *p;

	p = &buf[49];
	*p = '\0';

	do
	{
		*--p = Rep[num % base];
		num /= base;
	} while (num != 0);

	return (p);
}
/**
  * isPrintable - checks if a char is a printbale char
  * @c: char argument
  * Return: char pointer
  */
int isPrintable(char c)
{
	if (c == '!' || c == '\"' || c == '#' || c == '$' || c == '%' ||
			c == '&' || c == '\'' || c == '(' || c == ')' ||
			c == '*' || c == '+' || c == ',' ||
			c == '-' || c == '.' || c == '/' || c == ':' ||
			c == ';' || c == '<' || c == '=' || c == '>' ||
			c == '?' || c == '@' || c == '[' || c == '\\' ||
			c == ']' || c == '^' || c == '`' || c == '{' ||
			c == '}' || c == '|' || (c >= '0' && c <= 9) ||
			(c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
