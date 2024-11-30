#include <stdio.h>

void convertLength() {
    double meters, kilometers;
    printf("\nEnter length in meters: ");
    scanf("%lf", &meters);
    kilometers = meters / 1000.0;
    printf("Length in kilometers: %.3lf km\n", kilometers);
}

void convertWeight() {
    double grams, kilograms;
    printf("\nEnter weight in grams: ");
    scanf("%lf", &grams);
    kilograms = grams / 1000.0;
    printf("Weight in kilograms: %.3lf kg\n", kilograms);
}

int main() {
    int choice;

    do {
        printf("\nUnit Converter Menu:\n");
        printf("1. Convert Meters to Kilometers\n");
        printf("2. Convert Grams to Kilograms\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                convertLength();
                break;
            case 2:
                convertWeight();
                break;
            case 3:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
