#include <stdio.h>

/**
 * main - Entry point for the Fizz-Buzz program
 *
 * Description: Prints numbers from 1 to 100. For multiples of three
 * it prints
 * "Fizz," for multiples of five,
 * it prints "Buzz," and for multiples of both three
 * and five, it prints "FizzBuzz."
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}

if (i < 100)
{
printf(" ");
}
else
{
printf("\n");
}
}
return (0);
}
