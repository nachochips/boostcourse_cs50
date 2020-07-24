#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main (void){
    // wm_num 은 수박의 현재 재고량, wm_price는 수박의 가격
    int wm_num = 5;
    int wm_price = 10000; 
    while( wm_num > 0 ){
        int order_num = get_int("구매할 수박의 개수: ");
        if( wm_num < order_num ){
            printf("현재 수박의 재고량은 %i개 입니다. 다시 입력해주세요.\n", wm_num);
        }
        else{
            printf("============================\n");
            printf("주문 건수 : %i건\n", order_num);
            printf("기존 재고량 : %i개\n", wm_num);
            printf("남은 재고량 : %i개\n", wm_num-order_num);
            printf("매출액(부가세포함) : %.0f원 \n", order_num*wm_price*1.1);
            printf("============================\n");
            wm_num = wm_num - order_num;
            if( wm_num == 0 ){
                printf("수박이 모두 소진되었습니다. 감사합니다.\n");
                break;
            }
            else{
                string answer = get_string("현재 수박의 재고량은 %i개 입니다. 추가 주문하시겠습니까?(예/아니오): ",wm_num);
                printf("\n");
                if( strcmp(answer,"예")==0 ){
                    continue;
                }
                else if( strcmp(answer,"아니오")==0){
                    printf("감사합니다. 안녕히 가십시오.\n");
                    break;
                }
                else{
                    printf("잘못 입력하셨습니다. 다시 시작하세요.\n");    
                }
            }
        }
    }
}
