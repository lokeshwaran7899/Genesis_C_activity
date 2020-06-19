#include<stdio.h>
int main()
{
    int i, fib[50];
    int n;
    printf("number of terms: ");
    scanf("%d",&n);
    fib[0] = 0;
    fib[1] = 1;
    for (i = 2; i < n; i++)
        {
        fib[i] = fib[i - 1] + fib[i - 2];
        }
    printf("\nSeries\t");
    for (i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    return 0;
}
