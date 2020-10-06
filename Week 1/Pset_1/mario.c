#include<stdio.h>
#include<cs50.h>

// recall the function that's aready created 
int get_positive_int(string prompt);

int main(void)
{
    int height = get_positive_int("Height :") ; 
    
    // nested for loop to make a pyramids        
    for (int i = 0; i < height; i++)
    {   
        //  decrease the no.of space each loop
        for (int k = height - i ; k > 1; k--)
        {         
            printf(" ");                    
        }
        
        //increase the no.of Hash each loop
        for (int j = 0; j < i + 1 ; j++)
        { 
            printf("#");
        }
        
        printf("\n");
    }
}         
       
// Prompt user for positive integer function
int get_positive_int(string prompt)
{
    int height;
    do
    {
        height = get_int("%s", prompt);
    }
    //range from [1,8]
    while (height < 1 || height > 8);
    return height;
}
   
