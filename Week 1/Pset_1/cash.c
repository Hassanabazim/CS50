/*  The program expect to enter the value of change you ownnin rational number
    try a small prices enter 0.30 or to get more than change
    wanna to figure about how many can 10 $ have a counis enter 10.00  */

#include<stdio.h>
#include<math.h>
#include<cs50.h>

double get_positive_float(string prompt);
int main(void)
{
    int coins = 0;
    double price = get_positive_float("change owed: ");
    int cents = round(price * 100);

// calculate how many 25 cein can get
    coins = cents / 25 ;
    cents = cents % 25 ;

// calculate how many 10 cein can get
    coins = coins + (cents / 10) ;
    cents = cents % 10 ;

// calculate how many 5 cein can get
    coins = coins + (cents / 5) ;
    cents = cents % 5 ;

// calculate how many 1 cein can get
    coins = coins + (cents / 1) ;


    printf("coins : %i\n", coins);
}

//user prompt interface function
double get_positive_float(string prompt)
{
    double n ;
    do
    {
        n = get_double("%s", prompt);
    }
    while (n < 0.01);
    return n ;
}
