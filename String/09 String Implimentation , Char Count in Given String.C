#include<stdio.h>
#include<conio.h>

void char_count(char *src);
int main()
{
    int cnt = 0;
    char Arr[60] ={},ch = '\0';
    printf("\n Enter The String");
    ch = getchar();
    cnt = char_count(ch);
    printf("\n Character %c accessed %d for Search in Given String",ch,cnt);
    _getch();
    return 0;
}

void char_count(char *src)
{
    int count = 0;
    while(src != '\0');
    {
        if(*src == 'ch')
        {
           count++;
        }
        src++;
    }
    return;
}
