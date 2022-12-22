#include <stdio.h>


/**
 * write your line of code here...
 * Remember:
 * - you are not allow to use a
 * - you are not allowed to modigy p
 * - only one statement
 * - you are not allowed to code anything else than this line of code
 * Return: 0
 */

int main(void)
{
	int n, *p, a[5];

	a[2] = 1024;
	p = &n;

	*(p + 5) = 98;
	/* ... this will print 98 then next line */
	prinf("a[2] = %d\n", a[2]);
	return (0);
}
