#include <stdio.h>
int main()
{
    int amount;
    int small = 0, medium = 0, large = 0;
    int smallTotal = 0, mediumTotal = 0, largeTotal = 0;
    do
    {
        printf("Enter expense (0 to stop): ");
        scanf("%d", &amount);
        if (amount == 0)
        {
            printf("Stopping...\n");
        }
        else if (amount < 0)
        {
            printf("Invalid amount!\n");
        }
        else if (amount < 100)
        {
            small++;
            smallTotal = smallTotal + amount;
        }
        else if (amount < 500)
        {
            medium++;
            mediumTotal = mediumTotal + amount;
        }
        else
        {
            large++;
            largeTotal = largeTotal + amount;
        }
    }   while (amount != 0);
    printf("\n--- Expense Summary ---\n");
    printf("Small count = %d\n", small);
    printf("Small total = ₹%d\n", smallTotal);
    printf("Medium count = %d\n", medium);
    printf("Medium total = ₹%d\n", mediumTotal);
    printf("Large count = %d\n", large);
    printf("Large total = ₹%d\n", largeTotal);
    printf("Total expenses = ₹%d\n",smallTotal + mediumTotal + largeTotal);
    return 0;
}
