#include <stdio.h>

void fact() {
    int n;
    printf("Enter a number to find factorial: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial not defined for negative numbers.\n");
        return;
    }

    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    printf("Factorial of %d is %d\n", n, result);
}

