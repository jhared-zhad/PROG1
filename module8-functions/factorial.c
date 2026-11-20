#include <stdio.h>

int factorial(int n) {
    int result = 1;
    
    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

int main() {
    int num;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("Invalid INPUT\n");
        return 1;
    }

    printf("%d! = %d\n", num, factorial(num));

    return 0;
}

