#include "main.h"
#include <unisted.h>

/**
 *  _putchar - writes the charater c to stdout
 *  @c: the character to print
 *
 *  Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
