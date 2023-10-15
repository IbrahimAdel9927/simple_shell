#include "ssh.h"

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int _putstring(char *s)
{
	int i;

	if (!s)
		return(0);
	for (i = 0; s[i]; i++)
		_putchar(s[i]);
	return (i);
}
