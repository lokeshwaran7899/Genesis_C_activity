//Fibonacci Series using Recursion
#include<stdio.h>
void fib(int );
int main()
{
    int n;
    long int i = 0, j = 1;
    printf("number of terms: ");
    scanf("%d", &n);
    printf("\nSeries\t",n);
    printf("%d ", 1);
    fib(n);
    return 0;
}

void fib(int aj)
{
    static long int first = 0, second = 1, sum;
    if(aj > 1)
    {
        sum = first + second;
        first = second;
        second = sum;
        printf("%ld ", sum);
        fib(aj-1);
    }
}
