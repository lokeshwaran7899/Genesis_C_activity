//Fibonacci Series using Recursion
#include<stdio.h>
void fib(int );
int main()
{
    int n;
    printf("number of terms: ");
    scanf("%d", &n);
    printf("\nSeries\t");
    printf("%d ", 1);
    fib(n);
    return 0;
}

void fib(int aj)
{
     if(aj > 1)
    {
        static long int first = 0, second = 1, sum;
        sum = first + second;
        first = second;
        second = sum;
        printf("%ld ", sum);
        fib(aj-1);
    }
}
