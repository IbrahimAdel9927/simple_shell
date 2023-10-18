#include "ssh.h"

/**
 * _env - func that get the env
 * @var: the input
 * Return: string
*/
char *_env(char *var)
{
	char **env;
	char *entry = NULL;

	for (env = environ; *env != NULL; env++)
	{
		entry = *env;
		if (_scm(entry, var) == 0
				&& entry[_sl(var)] == '=')
		{
			return (entry + _sl(var) + 1);
		}
	}
	return (NULL);
}

/**
 * pth - func get the path
 * @col: the input
 * Return: string
*/
char *pth(char *col)
{
	char *path = _env("PATH");
	char *pc = NULL, **pt = NULL, *fp = NULL;
	unsigned int i = 0, k, j;
	struct stat st;

	if (path == NULL)
		return (NULL);
	pc = _scc(path);
	if (pc == NULL)
		return (NULL);
	_st(&pt, pc, ":");
	while (pt[i] != NULL)
	{
		k = _sl(col);
		j = _sl(pt[i]);
		fp = malloc(k + j + 8);
		if (fp == NULL)
		{
			free(fp);
			return (NULL);
		}
		_sc(fp, pt[i]);
		_scat(fp, "/");
		_scat(fp, col);

		if (stat(fp, &st) == 0)
		{
			free(pc);
			return (fp);
		}
		else
		{
			free(fp);
			i++;
		}
	}
	free(pc);
	if (stat(col, &st) == 0)
		return (_scc(col));
	return (NULL);
}
