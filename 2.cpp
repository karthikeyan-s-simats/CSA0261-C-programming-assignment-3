#include <stdio.h>
#include <stdbool.h>

// Function to check whether a given number is prime
bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    bool found = false;

    // Check all possible pairs of prime numbers that add up to n
    for (int i = 2; i <= n / 2; i++) {
        if (is_prime(i) && is_prime(n - i)) {
            printf("%d = %d + %d\n", n, i, n - i);
            found = true;
        }
    }

    if (!found) {
        printf("No two prime numbers add up to %d\n", n);
    }

    return 0;
}

