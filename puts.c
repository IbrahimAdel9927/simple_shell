#include "ssh.h"
/**
 * _putchar - afunction prints char
 * @c: input
 * Return: integer
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _putstring - afunction prints string
 * @s: input
 * Return: integer
*/
int _putstring(char *s)
{
	int i;

	if (!s)
		return(0);
	for (i = 0; s[i]; i++)
		_putchar(s[i]);
	return (i);
}
