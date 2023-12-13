#include "shell.h"

/**
 * my_getline - read a line from a stream
 * @lineptr: pointer to a pointer to a character,
 * which will point to the line read
 * @n: pointer to a size_t, which will be set to
 * the length of the line read
 * @stream: pointer to a FILE, which is the stream
 * to read from
 *
 * Return: the number of characters read,
 * or -1 if an error occurred
 */



ssize_t my_getline(char **lineptr, size_t *n, FILE *stream)
{
static char buffer[BUFFER_SIZE];
size_t pos = 0;
ssize_t red;
char c;

if (lineptr == NULL || n == NULL || stream == NULL)
{
return (-1);
}

while ((red = read(fileno(stream), &c, 1)) == 1 && c != '\n')
{
buffer[pos++] = c;
if (pos == BUFFER_SIZE)
{
buffer[pos] = '\0';
*lineptr = strdup(buffer);
*n = pos;
return (pos);
}
}

buffer[pos] = '\0';
*lineptr = strdup(buffer);
*n = pos;

if (red == -1)
{
return (-1);
}
else if (red == 0)
{
return ((pos) > 0 ? pos : (size_t)-1);
}
else
{
return (pos);
}
}
