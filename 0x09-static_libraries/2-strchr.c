#include "main.h"
#include <stddef.h>
/**
*_strchr - Returns a pointer to the first occurrence
*of the character c in the string s, or NULL if the
*character is not found
*
*@s:string targeted
*@c:character targeted
*
*Return: returns pointer to first occcurence of c
*/
char *_strchr(char *s, char c)
{
int i;

for (; s[i] >= '\n'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
