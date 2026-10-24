#include <stdio.h>

int main(void) {
    int number;
    int reversed = 0;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &number) != 1 || number < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    do{
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }while (number > 0);


    printf("Reversed number = %d\n", reversed);
    return 0;
}
