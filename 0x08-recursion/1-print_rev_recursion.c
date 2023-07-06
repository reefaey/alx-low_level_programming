#include "main.h"

/**
 * void _print_rev_recursion - function that prints a string in reverse.
 * @s: param
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
