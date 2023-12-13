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
printf("Simple Shell\n");
printf("Builtin commands:\n");
printf("Change directory\n");
printf("Print environment variables\n");
printf("Display help information\n");
printf("Exit the shell\n");
return (1);
}

/**
 * E_exit - Exit the shell
 * @args: Array of arguments (unused)
 *
 * Return: 0 (success)
 */
int E_exit(char **args)
{
(void)args;
printf("Exiting the shell\n");
exit(0);
}


/**
 * _strcmp - compare string values
 * @a: first argument
 * @b: second argument
 *
 * Return: 0 If the two strings are identical,
 * returns 1 If the first string is greater than the second string,
 * returns (-1) If the first string is less than the second string
 */
int _strcmp(char *a, char *b)
{
int i;

i = 0;
while (a[i] != '\0' && b[i] != '\0')
{
if (a[i] != b[i])
{
return (a[i] - b[i]);
}
i++;
}
return (0);
}
