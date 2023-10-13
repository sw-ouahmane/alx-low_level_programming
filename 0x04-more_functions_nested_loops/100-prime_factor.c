#include <stdio.h>
#include <math.h>

/**
* main - Entry point
*
* Description: Finds and prints the largest prime factor of 612852475143.
* Uses prime factorization.
*
* Return: 0 (Success)
*/
int main(void)
{
long n = 612852475143;
long maxPrime = -1;

while (n % 2 == 0)
{
maxPrime = 2;
n /= 2;
}

for (long i = 3; i <= sqrt(n); i += 2)
{
while (n % i == 0)
{
maxPrime = i;
n /= i;
}
}

if (n > 2)
{
maxPrime = n;
}

printf("%ld\n", maxPrime);
return (0);
}
