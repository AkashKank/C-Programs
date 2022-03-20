#include<stdio.h>
#include<conio.h>
#include<string.h>
void strrevX(char *src, char*Dest);

int main()
{
    char str[20] = {};
    printf("\n Enter a String ");
    gets(str);
    strrevX(str,str);
    printf("\n Output String = %s",str);
    _getch();
    return 0;
}

void strrevX(char *src, char *Dest)
{
    int i = 0, j = 0;
    j = strlen(src)-1;
    while(j>i)
    {
        char ch = src[i];
        src[i] = src[j];
        src[j] = ch;
        i++;
        j--;
    }
    return;
}

int strlen(char *src)
{
    int len = 0;
    for(len = 0; *src!='\0';len++);
    return len;
}
