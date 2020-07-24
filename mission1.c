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
    while (w<n);
    if (n<=w)
    {
        int stock = w - n;
        int sales = n*10000*1.1;
        printf("주문건수: %i개\n", n);
        printf("기존재고량: %i개\n", w);
        printf("남은재고량: %i개\n", stock);
        printf("매출액(부가세포함): %i원\n", sales);
    }
}
