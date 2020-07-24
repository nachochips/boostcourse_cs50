#include <stdio.h>
#include <cs50.h>

int main ()
{
    int n;
    int w = 5;
    do 
    {
        n = get_int("How many watermelon do you want to buy?\n"); 

    }
    while (w < n);
    if (n <= w)
    {
        int stock = w - n;
        int sales = n*10000*1.1;
        printf("The total sale is %i\n", sales);
    }

}
