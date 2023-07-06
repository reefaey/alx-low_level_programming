#include "main.h"

/**
 * void _print_rev_recursion - function that prints a string in reverse.
 * @s: param
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == s[0])
	return;
	int ch = strlen(*s);
	/*To get length of array*/
	_putchar(ch);
	_print_rev_recursion(ch--);
}
