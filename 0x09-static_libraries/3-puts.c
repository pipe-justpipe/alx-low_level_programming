#include "main.h"
/**
 * _puts - print a string to stdout
 * @str: pointer parameter
 * Return: 0
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
