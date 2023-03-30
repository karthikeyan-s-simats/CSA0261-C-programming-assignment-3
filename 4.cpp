#include <stdio.h>

int find_lcm(int a, int b);

int main() {
    int num1, num2, lcm;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    lcm = find_lcm(num1, num2);

    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}

int find_lcm(int a, int b) {
    int max, min, i, lcm;

    if (a > b) {
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }

    for (i = max; ; i += max) {
        if (i % min == 0) {
            lcm = i;
            break;
        }
    }

    return lcm;
}


