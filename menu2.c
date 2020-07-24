 #include <stdio.h>
#include <cs50.h>
#include <string.h>

int main ()
{
    int weekday = get_int("요일을 입력하세요: ");
    string menu = "";


    switch(weekday){
        case 0: menu = "비빔밥"; break;
        case 1: menu = "청국장"; break;
    }

    printf("%d: %s\n", weekday, menu);
}
