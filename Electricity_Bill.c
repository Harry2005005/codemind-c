#include <stdio.h>

void calculateElectricityBill(int units) {
    float costPerUnit = 0.0;
    float bill = 0.0;
    float surcharge = 0.0;
    float totalAmount = 0.0;

    if (units <= 199) {
        costPerUnit = 1.20;
    } else if (units >= 200 && units < 400) {
        costPerUnit = 1.40;
    } else if (units >= 400 && units < 600) {
        costPerUnit = 1.60;
    } else if (units >= 600 && units < 800) {
        costPerUnit = 1.80;
    } else {
        costPerUnit = 2.00;
    }

    bill = units * costPerUnit;

    if (bill > 400) {
        surcharge = bill * 0.15;
    }

    totalAmount = bill + surcharge;

    printf("Units Consumed: %d
", units);
    printf("Cost per Unit: %.2f
", costPerUnit);
    printf("Bill: %.2f
", bill);
    printf("Surcharge: %.2f
", surcharge);
    printf("Total Amount: %.2f
", totalAmount);
}

int main() {
    int units;
    scanf("%d", &units);

    calculateElectricityBill(units);

    return 0;
}