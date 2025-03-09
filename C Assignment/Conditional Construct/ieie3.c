#include <stdio.h>

int main() {
    int roll, physics, chemistry, computer;
    char name[50];

    printf("Enter Roll Number: ");
    scanf("%d", &roll);
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter marks in Physics, Chemistry, and Computer Application: ");
    scanf("%d %d %d", &physics, &chemistry, &computer);

    int total = physics + chemistry + computer;
    float percentage = total / 3.0;

    printf("\nRoll No: %d\nName: %s\n", roll, name);
    printf("Total Marks: %d\nPercentage: %.2f\n", total, percentage);

    if (percentage >= 60)
        printf("Division: First\n");
    else if (percentage >= 50)
        printf("Division: Second\n");
    else if (percentage >= 40)
        printf("Division: Third\n");
    else
        printf("Fail\n");

    return 0;
}
