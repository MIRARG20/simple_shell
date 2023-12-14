#include "shell.h"

/**
 * chi_process - create a new process and execute commands
 * @args: commands and flags
 *
 * Return: 0 if success, -1 otherwise
 */
int chi_process(char **args)
{
pid_t pid;
int s;

pid = fork();

if (pid == -1)
{
perror("new_process: fork");
return (-1);
}
else if (pid == 0)
{
if (execvp(args[0], args) == -1)
{
perror("new_process: execvp");
exit(EXIT_FAILURE);
}
}
else
{
if (waitpid(pid, &s, 0) == -1)
{
perror("new_process: waitpid");
return (-1);
}
if (s == 0)
{
return (0);
}
else
{
fprintf(stderr, "Error: Child process did not execute successfully.\n");
return (-1);
}
}
return (0);
}
