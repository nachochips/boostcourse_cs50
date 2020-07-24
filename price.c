#include <stdio.h>
#include <cs50.h>

int main ()
{
    float price = get_float("What's the price?\n");
    printf("Your total price is USD %.2f\n.", price*1.0625);
}
