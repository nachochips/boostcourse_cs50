#include <cs50.h>
#include <stdio.h>
int main (void){
    // wm_num 은 수박의 현재 재고량, wm_price는 수박의 가격
    int wm_num = 5;
    int wm_price = 10000; 
    int order_num=0;
    int plus=0;
    int stock = wm_num - order_num - plus;
do
{
    
    plus=get_int("수박 몇 개 더 사시겠어요?");
    if (stock < plus)
    {
        {
            printf("현재 수박의 재고량은 %d개 입니다. 다시 입력해주세요.\n", stock);
        }
    }
    do 
    {
        
        
        if( wm_num < order_num)
        {printf("현재 수박의 재고량은 %d개 입니다. 다시 입력해주세요.\n", wm_num);}
    
    }   
    while ( wm_num < order_num);
}
while (stock >0);
    
    if (stock == 0)
    {
        printf("감사합니다. 수박이 다 팔렸습니다.\n");
        printf("\n");
        printf("주문 건수 : %i건\n", wm_num);
        printf("기존 재고량 : %i개\n", wm_num);
        printf("남은 재고량 : %i개\n", stock);
        printf("매출액(부가세포함) %.0f원\n: ", wm_num*wm_price*1.1);
    }


        printf("\n");
        printf("주문 건수 : %i건\n", order_num);
        printf("기존 재고량 : %i개\n", wm_num);
        printf("남은 재고량 : %i개\n", stock);
        printf("매출액(부가세포함) %.0f원\n: ", order_num*wm_price*1.1);
}
