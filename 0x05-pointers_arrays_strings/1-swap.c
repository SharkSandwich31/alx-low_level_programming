#include "main.h"

/**
 * swap_int - swaps values of two integeres
 *
 * @a: first integere
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;
	*a = d;
	*b = c;
}
