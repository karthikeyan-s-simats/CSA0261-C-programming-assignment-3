#include <stdio.h>

int isPrime(int num) {
    int i;
    for (i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            return 0; // not a prime number
        }
    }
    return 1; // prime number
}

int main() {
    int num1, num2, i, flag;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    printf("Prime numbers between %d and %d are: ", num1, num2);

    for (i = num1+1; i < num2; i++) {
        // flag variable to check if i is prime or not
        flag = isPrime(i);
        if (flag == 1) {
            printf("%d ", i);
        }
    }
    return 0;
}

