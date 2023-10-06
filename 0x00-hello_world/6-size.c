#include <stdio.h>
/**
 * main - A program that prints the size of various types
 * on the computer it is compiled and run on
 * Return 0 (Good)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char:%lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of b char:%lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of c char:%lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of d char:%lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of f char:%lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
