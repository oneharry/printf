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
    
	unsigned int count = 0;

	va_start(arg, format);
	for (fmt = format; *fmt != '\0'; fmt++)
	{
		if (*fmt != '%')
		{
			count++;
			_putchar(*fmt);
			continue;
		}
			switch (*++fmt)
			{
				case 'i':
				case 'd':
					count += format_di(arg);
					break;
				case 'o':
					count += format_o(arg);
					break;
				case 'u':
					count += format_u(arg);
					break;
				case 'x':
					count += format_x(arg);
					break;
				case 'X':
					count += format_X(arg);
					break;
				case 'S':
					count += format_S(arg);
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
				case '%':
					format_percent(arg);
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
					break;
			}
	}
	va_end(arg);
	return (count);
}
