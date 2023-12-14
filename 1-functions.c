#include "shell.h"

/**
 * _cd - Change directory
 * @args: Array of arguments
 *
 * Return: 1 (success), 0 otherwise
 */
int _cd(char **args)
{
if (args[1] == NULL)
{
printf("_cd: expected argument to \"cd\"\n");
return (0);
}
if (chdir(args[1]) != 0)
{
perror("_cd");
return (0);
}
return (1);
}

/**
 * _env - Print environment variables
 * @args: Array of arguments (unused)
 *
 * Return: 1 (success)
 */
int _env(char **args)
{

char **env = environ;
(void)args;

while (*env)
{
printf("%s\n", *env++);
}
return (1);
}

/**
 * _help - Display help information
 * @args: Array of arguments (unused)
 *
 * Return: 1
 */
int _help(char **args)
{
(void)args;
printf("cd for Change the directory\n");
printf("env for Print the environment variables\n");
printf("help for get information\n");
printf("Exit for Exit shell\n");
return (1);
}

/**
 * E_exit - Exit the shell with a specified status.
 * @args: Array of arguments, where args[1] is the exit status.
 *
 * Return: Always returns the specified exit status.
 */
int E_exit(char **args)
{
if (args[1] != NULL)
{
int status = _atoi(args[1]);
printf("Exiting the shell with status %d\n", status);
exit(status);
}
else
{
printf("Exiting the shell\n");
exit(0);
}
}



/**
 * _atoi - Convert a string to an integer.
 * @p: The input string.
 *
 * Return: The converted integer.
 */
int _atoi(const char *p)
{
int result = 0;
int n = 1;
int i = 0;

if (p[0] == '-')
{
n = -1;
i++;
}

while (p[i] != '\0' && p[i] >= '0' && p[i] <= '9')
{
result = result * 10 + (p[i] - '0');
i++;
}


return (result *n);
}

