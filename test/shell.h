#ifndef _SHELL_H
#define _SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int _getline(void);
int *arg(__attribute__((unused))int ac, char **av);
int main(void);
int _fork(void);
int _fork1(void);
int _wait(void);
int _getpid(void);
int _stat(void);
int _fork_wait_execve(void);
#endif

