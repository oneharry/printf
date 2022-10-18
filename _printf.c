#include "main.h"
/**
  * _printf - prints formated strings
  * @format: pointer to argumens string
  * @...: variables argument numbers
  * Return: integer
  */
int _printf(const char *format, ...)
{
	va_list arg;
	const char *fmt;
	unsigned int x;

	va_start(arg, format);
	for (fmt = format; *fmt != '\0'; fmt++)
	{
		if (*fmt != '%')
		{
			_putchar(*fmt);
			continue;
		}
		
			switch (*++fmt)
			{
				case 'i':
				case 'd':
					format_di(arg);
					break;
				case 'o':
					format_o(arg);
					break;
				case 'u':
					format_u(arg);
					break;
				case 'x':
					format_x(arg);
					break;
				case 'X':
					format_X(arg);
					break;
				case 'S':
					format_S(arg);
					break;
			}
	}
		
	va_end(arg);
	return (0);
}
