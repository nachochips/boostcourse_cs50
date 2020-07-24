#include <stdio.h>
#include <cs50.h>

int main ()
{
    //임의의 구매 희망하는 수박의 수
    int n;
    //기존 재고
    int w = 5;
    do 
    {
        n = get_int("수박 몇 개 사시겠어요?\n");
        if (w<n)
        {
            printf("죄송하지만 수박이 %d개 밖에 안 남았어요.\n");
        }
        //재고량보다 더 많은 수박 구매 희망시
        do
        
    }
    while (w<n);
    //적정량 구매시
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

