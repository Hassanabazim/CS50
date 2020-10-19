#include<cs50.h>
#include <stdio.h>

int main(void)
{
    // ask a user for a name 
    string name = get_string("what is your name?\n") ;
   
    printf("hello, %s\n", name);
}
