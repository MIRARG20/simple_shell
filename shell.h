#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#define TOK_DELIM " \t\r\n\a"

extern char **environ;
void interactive(void);
void non_interactive(void);
char *get_line(void);
char **tokns_split(char *line);
int _execute(char **args);
int chi_process(char **args);
char *read_std(void);
int _cd(char **args);
int _help(char **args);
int E_exit(char **args);
int _env(char **args);
#endif
