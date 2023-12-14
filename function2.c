#include "shell.h"
/**
 * _strlen - Calculate the length of a string.
 * @ptr: The input string.
 *
 * Return: The length of the string.
 */
size_t _strlen(const char *ptr)
{
size_t length = 0;

while (ptr[length] != '\0')
{
length++;
}

return (length);
}
