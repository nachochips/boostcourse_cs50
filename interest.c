#include <stdio.h>
#include <cs50.h>

int main ()
{
    float deposit = get_float("How much would you like to deposit?\n");
    printf("Okay, after 1 year, you'll be receiving USD%.2f, exlcuding taxes.\n", deposit*1.012);
}

