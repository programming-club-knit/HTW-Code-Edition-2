#include <stdio.h>

int main(void) {
    int n;
    int is_prime = 1;

    printf("Enter an integer greater than 1: ");
    if (scanf("%d", &n) != 1 || n <= 1) {
        printf("Please enter an integer greater than 1.\n");
        return 1;
    }

    for (int divisor = 2; divisor * divisor <= n; divisor++) {
        if (n % divisor == 0) {
            is_prime = 0;
            break;
        }
    }

    if (is_prime==1) {
        printf("%d is prime.\n", n);
    } else {
        printf("%d is not prime.\n", n);
    }

    return 0;
}
