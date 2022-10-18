#include "main.h"
/**
  * _putchar - outputs char to stdout
  * @c: character to be outputed
  * Return: integer
  */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
