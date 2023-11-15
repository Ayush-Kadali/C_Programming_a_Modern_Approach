//Write a program that asks user to enter a dollars-and-cents amount, then display the amount with 5% tax added:
//Enter an amount: 100.0
//With tax added: $105.00


#include <stdio.h>

int main (void)
{
    float initial_amount, taxed_amount;

    printf("Enter an amount : ");
    scanf("%f", &initial_amount);

    taxed_amount = initial_amount * 1.5f;
    printf("With tax added : %.2f\n",taxed_amount);

    return 0;
}
