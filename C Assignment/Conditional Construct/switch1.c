#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nEnter choice: ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (choice) {
        case 1: result = num1 + num2; break;
        case 2: result = num1 - num2; break;
        case 3: result = num1 * num2; break;
        case 4: result = num2 != 0 ? num1 / num2 : 0; break;
        default: printf("Invalid choice!\n"); return 0;
    }

    printf("Result: %.2f\n", result);
    return 0;
}
