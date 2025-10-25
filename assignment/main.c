#include <stdio.h>
#include "fibonacci.h"
#include "printFib.h"

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printFibonacciSeries(n);
    printf("%dth Fibonacci number: ", n);
    printFibonacci(n);

    return 0;
}

