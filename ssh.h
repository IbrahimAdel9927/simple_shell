#ifndef SSH_H
#define SSH_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>

char *read_in(void);
char *read_out(void);
char *_getcol(char **buffer, int bufl);
char* _st(char *str, char c);
char *_sc(char *dest, char *src);
char **handl_arg(char *col);
int ex_arg(char **arg);
int _process(char **arg);
int kh_chaar(char c);
int kh_string(char *str);
int _strtoi(char *s);
int _sl(char *s);
int _scm(char *s1, char *s2);

#endif/*the_end*/
