#include "main.h"
/**
* _strncat - concatenates two strings,
* @dest: destination.
* @src: source.
* @n: amount of bytes used from src.
* Return: the pointer to dest.
*/
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0;

// Find the length of dest
while (dest[dest_len] != '\0')
{
dest_len++;
}

// Append at most 'n' characters from src to dest
for (int i = 0; i < n && src[i] != '\0'; i++)
{
dest[dest_len] = src[i];
dest_len++;
}

return dest;
}

