#include "main.h"

/**
 * swap_int - this function change the intial.
 * @a: this is a parmeter to change.
 * @b: this is another parameter to change.
 */

void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
