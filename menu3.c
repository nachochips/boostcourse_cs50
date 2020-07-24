#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main ()
{
    int weekday = get_int("요일을 입력하세요: ");
    string menu[7] = {"a","b","c","d","e","f","g"};

    printf("%d: %s\n", weekday, menu[weekday]);
}
