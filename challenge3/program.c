#include <stdio.h>

int main() {
    float purchase, discount, amount, delivery, finalAmount;
    int customerType, distance;

    printf("Enter purchase amount: ");
    scanf("%f", &purchase);

    printf("Enter customer type : ");
    scanf("%d", &customerType);

    printf("Enter delivery distance in km: ");
    scanf("%d", &distance);


    if (customerType == 1 && purchase >=2000)
        {
        discount = purchase * 0.15;
        }
         else if(customerType == 2 && purchase < 2000)
        {
        discount = purchase * 0.10;
        }
         else if (customerType == 3 && purchase >= 3000)
        {
        discount = purchase * 0.08;
        }
    else
        {
        discount = 0;
        }


    amount = purchase - discount;


    if (distance <= 5) {
        delivery = 50;
    }
 else if (distance <= 10) {
        delivery = 100;
    }
    else {
        delivery = 150;
    }


    finalAmount = amount + delivery;


    printf("\nPurchase Amount: Rs. %.2f", purchase);
    printf("\nDiscount Amount: Rs. %.2f", discount);
    printf("\nAmount After Discount: Rs. %.2f", amount);
    printf("\nDelivery Charge: Rs. %.2f", delivery);
    printf("\nFinal Payable Amount: Rs. %.2f\n", finalAmount);

    return 0;
}


