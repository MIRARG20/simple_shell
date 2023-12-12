#include "shell.h"

/**
 * read_std - Read a line from standard input.
 *
 * Return: A pointer to the read line.
 */
char *read_std(void)
{
int buf_s = 1024;
int ch;
int i;
char *t;

char *line = malloc(buf_s * sizeof(char));
if (line == NULL)
{
printf("Allocation error\n");
exit(EXIT_FAILURE);
}
for (i = 0; ; i++)
{
ch = getchar();
if (ch == EOF || ch == '\n')
{
line[i] = '\0';
break;
}
line[i] = ch;
if (i >= buf_s - 1)
{
buf_s += 1024;
t = realloc(line, buf_s * sizeof(char));
if (t == NULL)
{
printf("Reallocation error\n");
exit(EXIT_FAILURE);
}
line = t;
}
}
if (ch == EOF && i == 0)
{
free(line);
exit(EXIT_SUCCESS);
}
return (line);
}
