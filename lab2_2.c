#include <stdio.h>

/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

long long factorial(int n) {
    // TODO: compute factorial iteratively
     long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result; // placeholder
}

int main(void) {
    int n;

    printf("Enter a non-negative integer n: ");
    if (scanf("%d", &n) != 1;) {
        printf("Error: invalid input.\n");
        return 1;
    }  
    if (n < 0) {
        printf("Error: n must be non-negative.\n");
        return 1;
    }

    if (n > 20) {
        printf("Error: n is too large (max 20 for long long).\n");
        return 1;
    }

    printf("%d! = %lld\n", n, factorial(n));
    

    // TODO: validate input, call function, print result

    return 0;
}
