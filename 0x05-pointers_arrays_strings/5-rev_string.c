#include "main.h"

/**
* rev_string - reverse string
* @s: string
* Return: void
*/

void rev_string(char *s)
{
int index, maximum, middle;
char first, last;

index = 0;
while (s[index] != '\0')
{
index++;
}
maximum = index - 1;
middle = maximum / 2;
while (middle >= 0)
{
first = s[maximum - middle];
last = s[middle];
s[middle] = first;
s[maximum - middle] = last;
middle--;
}
}

