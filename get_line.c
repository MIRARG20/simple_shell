#include "shell.h"
/**
 * get_line - Read a line from stdin.
 *
 * Return: A pointer to the line with content, or NULL on failure or EOF.
 */
char *get_line(void)
{
size_t bufsize = 1024;
size_t len;
size_t new_bufsize;
char *new_line;
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
return (NULL);
}
else
{
free(line);
perror("Error reading line from stdin");
exit(EXIT_FAILURE);
}
}
len = strlen(line);
if (len > 0 && line[len - 1] != '\n')
{
new_bufsize = bufsize * 2;
new_line = realloc(line, new_bufsize *sizeof(char));
if (!new_line)
{
perror("Unable to reallocate buffer");
free(line);
exit(EXIT_FAILURE);
}
line = new_line;
fgets(line + len, new_bufsize - len, stdin);
}
return (line);
}
