#include <cs50.h>
#include <stdio.h> 

int get_positive_int();

int main()
{
    int i = get_positive_int();
    printf("%i\n", i);
}

int get_positive_int()
{
    int n;
    do 
    {
        n=get_int("Positive Intenger:");
    }
    while (n<1);
    return n;
}
