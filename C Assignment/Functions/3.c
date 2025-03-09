#include <stdio.h>

int is_even(int num) {
    return num % 2 == 0;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_even(num))
        printf("%d is an Even number.\n", num);
    else
        printf("%d is an Odd number.\n", num);

    return 0;
}
