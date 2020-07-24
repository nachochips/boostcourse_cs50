#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main ()
{
    int wm_num = 5;
    int wm_price = 10000;
    while (wm_num > 0){
        int order_num = get_int("구매할 수박의 개수:");
        if (wm_num < order_num){
            printf("현재 수박의 재고량은 %i개 입니다. 다시 입력해 주세요.\n", wm_num);
        }
        else{
            printf("====================\n");
            printf("주문건수: %i개\n", order_num);
            printf("기존재고량: %i개\n", wm_num);
            printf("남은재고량: %i개\n", wm_num - order_num)
            printf("매출액(부가세 포함): %.2f원\n", order_num*wm_price*1.1);
            printf("====================\n");
            wm_num = wm_num - order_num;
            if (wm_num == 0){
                printf("\n수박이 모두 소진되었습니다. 감사합니다.");
                break;
            }
            else{
                string plus = get_string("현재 수박의 재고량은 %i개 입니다. 추가 주문하시겠습니까?(예/아니오)", wm_num);
                printf("\n");
                if (strcmp(plus,"예")==0){
                    continue;
                }
            }

        }
    }

}
