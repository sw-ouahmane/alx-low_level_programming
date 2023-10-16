#include "main.h"

/**
* _strlen - returns length of string
* @s: string
* Return: length of string
*/

int _strlen(char *s)
{
int sttr = 0;

while (s[sttr] != '\0')
{
sttr++;
}

return (sttr);
}
