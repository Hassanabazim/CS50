#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{

    long long num, card, card1;
    int sum, sum1, counter = 0 ;

    do
    {
        num = get_long_long("VISACARD NUMBER : ");
    }
    while (num < 0);

    card = num ;
    card1 = card ;


    while (card1 != 0)          // function to calculate the degits of the creditcard number
    {
        card1 = card1 / 10 ;
        counter++ ;
    }

    if (counter != 15 && counter != 16 && counter != 13)    // print invalid when the nput not creditcard number
    {
        printf("INVALID\n") ;
    }

    int cc[counter];
    for (int i = 0; i < counter; i++)       // array to sort and assign the creditcard number
    {
        cc[i] = card % 10 ;
        card = card / 10 ;
    }

    int cc1[counter];
    for (int i = 0; i < counter; i++)
    {
        cc1[i] = cc[i];
    }

    for (int i = 1; i < counter; i += 2)    // for loop to multiply the odds digits of creditcard number
    {
        cc1[i] =  cc1[i] * 2 ;
        if (cc1[i] >= 10)
        {
            for (int j = 0; j < 2; j++) // to seprate the products number and add them
            {
                int first_degit = cc1[i] / 10 ;
                int secnd_degit = cc1[i] % 10 ;
                cc1[i] = first_degit + secnd_degit ;
            }
        }
        sum = sum + cc1[i] ;
    }

    for (int i = 0; i < counter; i += 2)        // for loop to add even digits of creditcard number
    {
        sum1 = sum1 + cc1[i] ;
    }

    int sum2 = sum1 + sum ;
    sum2  = sum2 % 10 ;

    if (counter == 13)
    {
        if (sum2 == 0)
        {
            if (cc[12] == 4)
            {
                printf("VISA\n");
            }

            else
            {
                printf("INVALID\n");
            }
        }

        else
        {
            printf("INVALID\n");
        }
    }


    if (counter == 15)      // when creditcard which contain 15 digits in his number
    {
        if (sum2 == 0)
        {
            if (cc[14] == 3 && cc[13] == 7)
            {
                printf("AMEX\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }

    if (counter == 16)      //when creditcard which contain 15 digits in his number
    {
        if (sum2 == 0)
        {
            if ((cc[15] == 5 && cc[14] == 5) || (cc[15] == 5 && cc[14] == 1) || (cc[15] == 5 && cc[14] == 3))
            {
                printf("MASTERCARD\n");
            }
            else if (cc[15] == 4)
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }
}
