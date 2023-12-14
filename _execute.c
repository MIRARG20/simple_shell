#include "shell.h"

/**
 * _execute - check if a command is builtin
 * or a process.
 * @args: Commands and flags.
 *
 * Return: 1 if success, 0 otherwise.
 */
int _execute(char **args)
{
if (args[0] == NULL)
{
return (-1);
}

/*// Check if the command is a built-in*/
if (_strcmp(args[0], "cd") == 0)
{
return (_cd(args));
}
else if (_strcmp(args[0], "env") == 0)
{
return (_env(args));
}
else if (_strcmp(args[0], "help") == 0)
{
return (_help(args));
}
else if (_strcmp(args[0], "exit") == 0)
{
return (E_exit(args));
}

/*// If not a built-in, try to execute from PATH*/
return (chi_process(args));
}
