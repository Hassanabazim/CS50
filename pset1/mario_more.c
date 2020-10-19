#include <cs50.h>
#include <stdio.h>

// recall the function that's already created
int get_positive_int(string prompt);
int main(void)
{
    int height = get_positive_int("Height :");

    // nested loop to create the left pyramids
    for (int i = 0; i < height; i++)
    {
        // the decresment of spaces at the left pyramids
        for (int j = height - i; j > 1; j--)
        {
            printf(" ");
        }

        // the incresment of hash at the left pyramids
        for (int k = 0; k < i + 1 ; k++)
        {
            printf("#") ;
        }

        printf("  "); // the space between the two pyramids

        // the incresment of the hash of the right pyramids
        for (int x = 0; x < i + 1 ; x++)
        {
            printf("#") ;
        }

        printf("\n") ;
    }
}
// the user interface inputs function
int get_positive_int(string prompt)
{
    int height ;
    do
    {
        height = get_int("%s", prompt);
    }
    while (height < 1 || height > 8); // the range [1.8]
    return height ;
}
