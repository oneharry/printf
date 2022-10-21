#include "main.h"
/**
  * format_S - replaces a non printable character with "\x"
  * @arg: argument
  * Return: 0
  */
int format_S(va_list arg)
{
	char *str, *s;
	int count = 0;

	for (str = va_arg(arg, char *); *str != '\0'; str++)
	{
		if (isPrintable(*str))
		{
			_putchar('\\');
			_putchar('x');
			s = convert(*str, 16);
			_putchar('0');
			_putchar(s[0]);
			count += 4;
		} else
		{
			_putchar(*str);
			count++;
		}
	}
	return (count);
}
/**
  * format_r - prints reverse of given arg
  * @arg: argument value
  * Return: 0
  */
int format_r(va_list arg)
{
	char *str;
	int len, x, count;

	str = va_arg(arg, char *);
	len = strlen(str);
	for (x = len - 1; x >= 0; x--)
	{
		_putchar(str[x]);
		count++;
	}
	return (count);
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
	if ((c >= 0 && c < 32) || c >= 127)
		return (1);
	return (0);
}
