#include "ssh.h"

/**
 * _scm - a function that compares two strings.
 * @s2: the first input
 * @s1: the second input
 * Return: 0 if true.
*/
int _scm(char *s1, char *s2)
{
	int a = 0, flag = 0;

	while (s1[a])
	{
		if (s1[a] != s2[a])
		{
			flag = ((int)s1[a] - 48) - ((int)s2[a] -48);
			break;
		}
		a++;
	}
	return (flag);
}

/***/
char *_scc(char *str)
{
	unsigned int a = 0;
	char *k = NULL;

	if (str == NULL)
		return (NULL);
	while (str[a] != '\0')
		a++;
	k = malloc(a + 1);
	if (k == NULL)
		return (NULL);
	_sc(k, str);
	return (k);
}

/***/
char *_scat(char *d, char *s)
{
	int a = 0, b;

	while (d[a] != '\0')
		a++;
	b = 0;
	while (s[b] != '\0')
	{
		d[a] = s[b];
		a++;
		b++;
	}
	d[a] = '\0';
	return (d);
}
