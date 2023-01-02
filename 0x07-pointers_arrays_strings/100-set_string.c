#include "main.h"

/**
 * set_string - Write funct that set the value of pointer to a char
 * @s: input 
 * @to: input 
 * Return: Alway 0 (Success)
 */

void set_string(char **s, char *to)
{
	*s = to;
}
