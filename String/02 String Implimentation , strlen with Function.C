#include<stdio.h>
#include<conio.h>
int strlenX(char *src);

int main()
{
    int len = 0;
    char str[20] = {};
    printf("\n Enter a String");
    gets(str);
    len = strlenX(str);
    printf("\n Length of Given String = %d ", len);
    getch();
    return 0;
}

int strlenX(char *src)
{
    int Cnt = 0;
    while (src[Cnt] !='\0')
    {
        Cnt++;
    }
    return Cnt;
}
