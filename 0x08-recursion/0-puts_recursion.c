#include "main.h"

/**
 * _puts_recursion - a function that prints a string end by new line
 * @s: is the parameter of the function
 * Return: nothing (void)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s++);
}
