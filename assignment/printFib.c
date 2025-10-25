#include <stdio.h>
#include "fibonacci.h"
#include "printFib.h"

void printFibonacciSeries(int n) {
    printf("Fibonacci series up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%lld ", fibo(i));
    }
    printf("\n");
}

void printFibonacci(int n) {
    printf("%lld\n", fibo(n - 1));
}

