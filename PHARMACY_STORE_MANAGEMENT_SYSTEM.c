#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Medicine {
    char name[50];
    float price;
    int quantity;
};

void displayMedicine(struct Medicine med) {
    printf("Medicine Name: %s\n", med.name);
    printf("Price: $%.2f\n", med.price);
    printf("Available Quantity: %d\n", med.quantity);
}

int main() {
    struct Medicine med1 = {"Paracetamol", 5.99, 100};
    struct Medicine med2 = {"Amoxicillin", 8.50, 50};

    printf("Welcome to the Pharmacy Store!\n");

    printf("\nMedicine Details Before Purchase:\n");
    displayMedicine(med1);
    displayMedicine(med2);

    float total = 0.0;
    int quantityPurchased;

    printf("\nHow many units of Paracetamol would you like to purchase? ");
    scanf("%d", &quantityPurchased);
    total += quantityPurchased * med1.price;
    med1.quantity -= quantityPurchased;

    printf("How many units of Amoxicillin would you like to purchase? ");
    scanf("%d", &quantityPurchased);
    total += quantityPurchased * med2.price;
    med2.quantity -= quantityPurchased;

    printf("\nMedicine Details After Billing:\n");
    displayMedicine(med1);
    displayMedicine(med2);

    printf("\nTotal Amount to Pay: $%.2f\n", total);

    return 0;
}

