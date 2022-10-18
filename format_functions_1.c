#include "main.h"
/**
  * format_S - replaces a non printable character with "\x"
  * @arg: argument
  * Return: 0
  */
int format_S(va_list arg)
{
	char *str, *s;

	for (str = va_arg(arg, char *); *str != '\0'; str++)
	{
		if (!isPrintable(*str))
		{
			s = convert(*str, 16);
			write(1, UNPR, 3);
			write(1, ZERO, 1);
			write(1, s, strlen(s));
		} else
		{
			write(1, &(*str), 1);
		}
	}
	return (0);
}
/**
  * format_r - prints reverse of given arg
  * @arg: argument value
  * Return: 0
  */
int format_r(va_list arg)
{
	char *str;
	int len, x;

	str = va_arg(arg, char *);
	len = strlen(str);
	for (x = len - 1; x >= 0; x--)
	{
		_putchar(str[x]);
	}
	return (0);
}
/**
  * convert - convert number to a base
  * @num: number argument
  * @base: the base to be converted to
  * Return: pointer to the character
  */
char *convert(unsigned int num, int base)
{
	char Rep[] = "0123456789ABCDEF";
	char buf[50];
	char *p;

	p = &buf[49];
	*p = '\0';

	do {
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
