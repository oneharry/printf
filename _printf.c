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
				case 'r':
					format_r(arg);
					break;
				case 'c':
					format_c(arg);
					break;
				case 's':
					format_s(arg);
					break;
				case 'b':
					format_b(arg);
					break;
				case 'p':
					format_p(arg);
					break;
				case 'R':
					format_R(arg);
					break;
				default:
					_putchar(*fmt);
					break;
			}
	}
	va_end(arg);
	return (0);
}
