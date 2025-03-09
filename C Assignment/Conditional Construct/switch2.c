#include <stdio.h>

int main() {
    int choice;
    float radius, length, breadth, base, height;

    printf("1. Circle\n2. Rectangle\n3. Triangle\nEnter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &radius);
            printf("Area of Circle: %.2f\n", 3.1416 * radius * radius);
            break;
        case 2:
            printf("Enter length and breadth: ");
            scanf("%f %f", &length, &breadth);
            printf("Area of Rectangle: %.2f\n", length * breadth);
            break;
        case 3:
            printf("Enter base and height: ");
            scanf("%f %f", &base, &height);
            printf("Area of Triangle: %.2f\n", 0.5 * base * height);
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}
