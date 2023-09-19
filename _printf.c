#include "main.h"
#include <stdarg.h>
/**
 * _printf - Building a custom printf function
 * @argument: The format string.
 * Return: The number of characters printed.
 */
int _printf(const char *arguments, ...) 
{
	va_list args;
	char c;
	char *stringtxt;
	int increment = 0;

	va_start(args, arguments);
	while (*arguments)
	{
	if (*arguments == '%' && *(arguments + 1) != '\0')
	{
		arguments++;
	if (*arguments == 'c')
	{
	c = va_arg(args, int);
	_putchar(c);
	increment++;
	}
	else if (*arguments == 's')
	{
	stringtxt = va_arg(args, char *);
	while (*stringtxt)
	{
	_putchar(*stringtxt);
	increment++;
	stringtxt++;
	}
	}
	else if (*arguments == '%')
	{
	_putchar('%');
	increment = increment + 1;
	}
	else
	{
	_putchar('%');
	_putchar(*arguments);
	increment = increment + 2;
	}
	}
	else
	{
	_putchar(*arguments);
	increment++;
	}
	arguments++;
	}
	va_end(args);
	return (increment);
}
