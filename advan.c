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
void _st(char ***arg, char* str, const char* c)
{
	char cstr[1000];
	int i = 0;
	char* re;

	_sc(cstr, str);
	*arg = malloc(sizeof(char *) * 1024);
	re = cstr;
	while (1)
	{
		char* tk = strtok_r(re, c, &re);
		if (tk == NULL)
			break;
		(*arg)[i] = malloc(sizeof(char) * _sl(tk) + 1);
		_sc((*arg)[i], tk);
		i++;
	}
	(*arg)[i] = NULL;
}

