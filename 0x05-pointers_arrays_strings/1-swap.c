#include "main.h"
/**
 * swap_int - is a function gets two parameters
 * then swaps the values of them.
 *
 * @a: integer to swap
 * @b: integer to swap
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp_var;

	temp_var = *a;
	*a = *b;
	*b = temp_var;
}

