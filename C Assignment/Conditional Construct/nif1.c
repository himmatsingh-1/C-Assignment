#include <stdio.h>

int main() {
    int a, b, c, d, e;
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    if (e > max) max = e;

    printf("Largest number: %d\n", max);
    return 0;
}
