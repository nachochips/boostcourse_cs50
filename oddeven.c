#include <stdio.h>
#include <cs50.h>

int main ()
{
    //우선 사용자에게 n값을 임의로 설정하도록 한다 
    int n = get_int("n:");

    //지정 숫자를 2로 나누었을 때 나머지가 0이면 짝수임을 알려준다 
    if (n % 2 == 0)
    {
        printf("n is an even number\n");
    }
    
    //반면 나머지가 1이면 홀수임을 알려준다 
    else 
    {
        printf("n is an odd number\n");
    }
}
