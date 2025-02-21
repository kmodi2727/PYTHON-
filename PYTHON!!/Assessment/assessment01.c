#include <stdio.h>

int main() {
    int choice, quantity;
    float total = 0;
    char more_orders;

    do {
        // Display menu
        printf("\nMenu:\n");
        printf("1. Pizza\t\tPrice:180rs/pcs\n");
        printf("2. Burger\t\tPrice:100rs/pcs\n");
        printf("3. Dosa\t\tPrice:120rs/pcs\n");
        printf("4. Idli\t\tPrice:50rs/pcs\n");
        printf("Please Enter your choice...:");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You have selected Pizza.\n");
                printf("Enter the quantity:");
                scanf("%d", &quantity);
                total += 180 * quantity;
                break;
            case 2:
                printf("You have selected Burger.\n");
                printf("Enter the quantity:");
                scanf("%d", &quantity);
                total += 100 * quantity;
                break;
            case 3:
                printf("You have selected Dosa.\n");
                printf("Enter the quantity:");
                scanf("%d", &quantity);
                total += 120 * quantity;
                break;
            case 4:
                printf("You have selected Idli.\n");
                printf("Enter the quantity:");
                scanf("%d", &quantity);
                total += 50 * quantity;
                break;
            default:
                printf("Invalid choice!\n");
        }

        printf("Amount: %.2f\n", total);

        printf("Do you want to place more orders? (y/n):");
        scanf(" %c", &more_orders); // Note the space before %c to consume newline

    } while (more_orders == 'y' || more_orders == 'Y');

    printf("Total Amount is: %.2f\n", total);

    return 0;
}
