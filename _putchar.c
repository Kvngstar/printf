#include <unistd.h>
/**
 * _putchar - prints character to the output
 * @c: the character to write to output
 * Return: a single character written to stdout
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
