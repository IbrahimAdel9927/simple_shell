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
