#include <stdio.h>

int main() {
    float purchase, discount, amount, delivery, finalAmount;
    int customerType, distance;

    printf("Enter purchase amount: ");
    scanf("%f", &purchase);

    printf("Enter customer type (1=Student,2=Regular) : ");
    scanf("%d", &customerType);

    printf("Enter delivery distance in km: ");
    scanf("%d", &distance);


    if (customerType == 1 && purchase >=2000)
        {
        discount = purchase * 0.15;
        }
         else if(customerType == 1 && purchase < 2000)
        {
        discount = purchase * 0.10;
        }
         else if (customerType == 2 && purchase >= 3000)
        {
        discount = purchase * 0.08;
        }
    else
        {
        discount = 0;
        }


    amount = purchase - discount;


    if (distance <= 5)
    {
        delivery = 40;
    } 
    else if (distance <= 15)
    {
        delivery = 100;
    }
    else 
    {
        delivery = 150;
    }


    finalAmount = amount + delivery;


    printf("\nPurchase Amount: Rs. %.2f", purchase);
    printf("\nDiscount Amount: Rs. %.2f", discount);
    printf("\nAmount After Discount: Rs. %.2f", amount);
    printf("\nDelivery Charge: Rs. %.2f", delivery);
    printf("\nFinal Amount: Rs. %.2f\n", finalAmount);

    return 0;
}


