# Programming project 08

## Question

Write a program that calculates the reamaining balance on a loan after the first, second, and third monthly payments:

```
Enter amount of loan : 20000.00
Enter interest rate : 6.0
Enteer monthly payment : 386.66

Balance remaining after first payment : $19713.34
Balance remaining after second payment : $19425.25
Balance remaining after third payment : $19135.71
``` 
Display each balance with two digits after the decimal point. 


## Solution

```c
#include <stdio.h>

int main (void)
{
    float amount, interest_rate, monthly_payment, interest ;

    printf("Enter the amount of loan : ");
    scanf("%f", &amount);
    
    printf("Enter interest reate : ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment : ");
    scanf("%f", &monthly_payment);


    interest = amount * interest_rate / 100 * 1/12;  // Interest = PRT/100 where T = 1/12 for 1 month
    amount = amount + interest - monthly_payment;
    printf("Balance remaining after first payment : $%.2f\n", amount);

    interest = amount * interest_rate / 100 * 1/12;  // Interest = PRT/100 where T = 1/12 for 1 month
    amount = amount + interest - monthly_payment;
    printf("Balance remaining after second payment : $%.2f\n", amount);

    interest = amount * interest_rate / 100 * 1/12;  // Interest = PRT/100 where T = 1/12 for 1 month
    amount = amount + interest - monthly_payment;
    printf("Balance remaining after third payment : $%.2f\n", amount);

    return 0;
}

```
