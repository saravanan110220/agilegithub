#include <stdio.h>

int main() {
    int n, i;
    unsigned long long t1 = 0, t2 = 1, nextTerm, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error! Please enter a positive integer.\n");
        return 1;
    }

    printf("Fibonacci Series up to %d terms:\n", n);

    for (i = 1; i <= n; ++i) {
        printf("%llu ", t1);
        sum += t1;  // keep track of sum
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    printf("\nSum of the series = %llu\n", sum);

    return 0;
}
