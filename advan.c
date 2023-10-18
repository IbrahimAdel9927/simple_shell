#include "ssh.h"

/**
 * _getcol - a function that get the input
 * @buf: the first input
 * @bufl: the second input
 * Return: pointer of string
*/
char *_getcol(char **buf, int bufl)
{
	return (fgets(*buf, bufl, stdin));
}

/**
 * _st - the fanction that help us handle the input
 * @str: the first input
 * @c: the second input
 * Return: a pointer of string
*/
char* _st(char *str, char c)
{
	static char *handle = NULL;
	char *tk = NULL;

	if (handle != NULL)
		handle = str;
	if (!*handle || !handle)
		return (NULL);
	while (*handle == c)
		handle++;
	tk = handle;

	while (*handle && (*handle != c))
		handle++;
	if (*handle)
	{
		*handle = '\0';
		handle++;
	}
	return (tk);
}

