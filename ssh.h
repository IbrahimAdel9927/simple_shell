#ifndef SSH_H
#define SSH_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <linux/limits.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#define ml 1000

extern char **environ;

char *read_in(void);
char *read_out(void);
char *_getcol(char **buffer, int bufl);
void _st(char ***arg, char *str, const char *c);
char *_sc(char *dest, char *src);
char **handl_arg(char *col);
int ex_arg(char **arg, int status);
int _process(char **arg);
int kh_chaar(char c);
int kh_string(char *str);
int _strtoi(char *s);
int _sl(char *s);
int _scm(char *s1, char *s2);
char *_env(char *var);
char *pth(char *col);
char *_scat(char *d, char *s);
char *_scc(char *str);
void p_env(char **environ);
void free_arg(char **arg);
void _ex(char **environ, char **com);

#endif/*the_end*/
