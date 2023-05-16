#include "main.h"
#include <unistd.h>
/**
 * _putchar - write character c to stdout
 * @c: character to print
 *
 * Return: On Success 1
 * On error, -1 is return, and is set appropriately.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}	
