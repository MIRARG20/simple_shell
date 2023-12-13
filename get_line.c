#include "shell.h"

/**
 * get_line - read line from stdin
 *
 * Return: a pointer to the line with content
 */
char *get_line(void)
{
size_t bufsize = 1024;
char *line;
line = malloc(bufsize * sizeof(char));
if (!line)
{
perror("Unable to allocate buffer");
exit(EXIT_FAILURE);
}

if (fgets(line, bufsize, stdin) == NULL)
{
if (feof(stdin))
{
free(line);
exit(EXIT_SUCCESS);
}
else
{
free(line);
perror("Error reading line from stdin");
exit(EXIT_FAILURE);
}
}

return (line);
}
