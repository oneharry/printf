#include "main.h"
/**
  * format_di - formats integer
  * @arg: argument
  * Return: integer
  */
int format_di(va_list arg)
{
	int x, hold, count, num = 0;

	x = va_arg(arg, int);
	if (x < 0)
	{
		_putchar('-');
		x = x * -1;
		num++;
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
		num++;
	}

	return (num);
}

/**
  * format_o - format octadecima
  * @arg: argument
  * Return: 0 for succcess
  */
int format_o(va_list arg)
{
	unsigned int x, num = 0;
	int a, b;
	int octalNum[50];


	x = va_arg(arg, unsigned int);
	for (a = 0; x > 0; a++)
	{
		octalNum[a] = x % 8;
		x = x / 8;
	}
	for (b = (a - 1); b >= 0; b--)
	{
		_putchar(octalNum[b] + '0');
		num++;
	}

	return (num);
}

/**
  * format_u - format unnsigned int
  * @arg: argument
  * Return: returnint
  */
int format_u(va_list arg)
{
	unsigned int x, hold;
	int count, num = 0;

	x = va_arg(arg, unsigned int);
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
		num++;
	}
	return (num);

}
/**
  * format_x - formats hex
  * @arg: arguments
  * Return: number of characters printed
  */
int format_x(va_list arg)
{
	long remainder, x;
	int a = 0;
	int b, num = 0;
	char hexa[100];

	x = va_arg(arg, unsigned int);
	while (x > 0)
	{
		remainder = x % 16;
		if (remainder < 10)
			hexa[a++] = remainder + 48;
		else
			hexa[a++] = remainder + 87;
		x = x / 16;
	}

	for (b = a; b >= 0; b--)
	{
		_putchar(hexa[b]);
		num++;
	}
	return (num);
}
/**
  * format_X - formats for cap HEX
  * @arg: argument
  * Return: returns number of character printed
  */
int format_X(va_list arg)
{
	long remainder, x;
	int a = 0;
	int b, num = 0;
	char hexa[100];

	x = va_arg(arg, unsigned int);
	while (x > 0)
	{
		remainder = x % 16;
		if (remainder < 10)
			hexa[a++] = remainder + 48;
		else
			hexa[a++] = remainder + 55;
		x = x / 16;
	}

	for (b = a; b >= 0; b--)
	{
		_putchar(hexa[b]);
		num++;
	}

	return (num);
}
