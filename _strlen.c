#include "main.h"
/**
  * _strlen - calculates the length of given string
  * @str: array oof chara
  * Return: integer of string len
  */
int _strlen(char *str)
{
	int len = 0;

	while (str[len++]);
	return (len);
}
