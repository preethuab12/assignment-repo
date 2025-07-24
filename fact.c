#include <stdio.h>

// Recursive function to calculate factorial
int fact(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * fact(n - 1);
  }
}

int main() {
  int num = 5;
  int factorial = fact(num);
  printf("Factorial of %d = %d\n", num, factorial);
  return 0;
}

