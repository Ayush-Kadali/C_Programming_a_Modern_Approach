
// Write a program thath asks the user to entr a U.S. dollar amount and then show how to pay that amount using the smallest number of $20, $10, $5, and $1 bills:

// Enter a dallar amount: 93

// $20 bills : 4
// $10 bills : 1
// $5 bills : 0
// $1 bills : 3 


#include <stdio.h>

int main (void)
{
    int amount, twenties, tens, fives, ones;

    printf("Enter a dollar amount : ");
    scanf("%d", &amount);

    twenties = amount/20;
    printf("$20 bills : %d\n", twenties);
    amount -= 20 * twenties;

    tens = amount/10;
    printf("$10 bills : %d\n", tens);
    amount -= 10 * tens;

    fives = amount/5;
    printf("$5 bills : %d\n", fives);
    amount -= 5 * fives;

    ones = amount/1;
    printf("$1 bills : %d\n", ones);
    amount -= 1 * ones;

    return 0;
}
