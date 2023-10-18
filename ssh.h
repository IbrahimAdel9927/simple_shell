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

#endif/*the_end*/
