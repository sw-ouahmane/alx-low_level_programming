#include <stdio.h>

/**
* print_number - Modify the value pointed to by p to set b[2] to 98.
* @n: input integer.
* Return: no return.
*/

int main(void)
{
int n;
int b[5];
int *p;

b[2] = 1024;
p = &n;


*(p + 5) = 98;


printf("b[2] = %d\n", b[2]);
return (0);
}

