#include <stdio.h>
#include <stdlib.h>

// functional approach
void fizzbuzzCheck(int num)
{
    // number divisible by 3, print 'Fizz'
    if ((num % 3) == 0)
        printf("Fizz");

    // number divisible by 5, print 'Buzz'
    if ((num % 5) == 0)
        printf("Buzz");

    // print the number
    if (((num % 3) != 0 && (num % 5) != 0))
        printf("%d", num);
    printf("\n");
}

int main(void)
{
    int i;
    for (i = 1; i <= 21; i++)
    {
        fizzbuzzCheck(i);
    }

    return 0;
}