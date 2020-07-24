#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main ()
{
    string weekday = get_string("요일을 입력하세요: ");
    string menu = "";


    

    if (strcmp(weekday, "월요일")==0)
    {
        menu = "청국장";
    }

    else if (strcmp(weekday, "화요일")==0)
    {
        menu = "비빔밥";
    }

    else if (strcmp(weekday, "수요일")==0)
    {
        menu = "된장찌개";
    }

    else if (strcmp(weekday, "목요일")==0)
    {
        menu = "칼국수";
    }

    else if (strcmp(weekday, "금요일")==0)
    {
        menu = "냉면";
    }

    else if (strcmp(weekday, "토요일")==0)
    {
        menu = "소불고기";
    }

    else if (strcmp(weekday, "일요일")==0)
    {
         menu = "오삼불고기";
    }

    printf("%s: %s\n", weekday, menu);
}
