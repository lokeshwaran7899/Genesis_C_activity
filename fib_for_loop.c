//Fibonacci Series using for loop
#include <stdio.h>
int main() {
    int i, n, t1 = 0, t2 = 1;
    printf("number of terms: ");
    scanf("%d", &n);
    printf("\nSeries: ");
    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        int t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }

    return 0;
}

