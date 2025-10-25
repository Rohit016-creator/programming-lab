#include <stdio.h>
#include "fibonacci.h"

long long fibo(int n) {
    if (n <= 1)
        return n;
    printf("Rohit Das");
    return fibo(n - 1) + fibo(n - 2);
}

