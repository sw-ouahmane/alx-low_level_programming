#include <stdio.h>

int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;

/* Modify the value pointed to by p to set a[2] to 98 */
*(p + 5) = 98;

/* This will print "a[2] = 98" */
printf("a[2] = %d\n", a[2]);
return (0);
}

