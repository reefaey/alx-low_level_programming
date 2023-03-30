#include "main.h"
/**
 * swap_int is a function that swaps the values of two integers.
 * @a: integer to swap
 * @b: integer to swap
 * Return: NA
 */
void swap_int(int *a, int *b)
{
	int temp_var;
	
	temp_var = *a;
	*a = *b;
	*b = temp_var;
}

