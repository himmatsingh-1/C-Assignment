#include <stdio.h>

long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++)
        fact *= i;
    return fact;
}

double sum_of_series(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += (double)factorial(i) / i;
    }
    return sum;
}

int main() {
    int n = 5;
    printf("Sum of series: %.2lf\n", sum_of_series(n));
    return 0;
}
