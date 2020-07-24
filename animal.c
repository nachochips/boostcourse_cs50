#include <stdio.h>
#include <cs50.h>

int main()
{
    string animal = get_string("당신이 좋아하는 동물은 무엇입니까?\n");
    printf("제가 좋아하는 동물은 %s\n", animal);
} 
