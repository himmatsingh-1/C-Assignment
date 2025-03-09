#include <stdio.h>

int main() {
    int id, units;
    char name[50];
    float bill, surcharge = 0;

    printf("Enter Customer ID: ");
    scanf("%d", &id);
    printf("Enter Customer Name: ");
    scanf("%s", name);
    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    if (units <= 199)
        bill = units * 1.20;
    else if (units < 400)
        bill = units * 1.50;
    else if (units < 600)
        bill = units * 1.80;
    else
        bill = units * 2.00;

    if (bill > 400)
        surcharge = bill * 0.15;
    
    bill += surcharge;
    
    if (bill < 100)
        bill = 100;

    printf("Total Amount to Pay: %.2f\n", bill);
    return 0;
}
