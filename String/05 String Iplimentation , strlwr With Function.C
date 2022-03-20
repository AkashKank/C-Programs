#include<stdio.h>
#include<conio.h>
void strlwrX(char *src);

int main()
{
    char str[20] = {};
    printf("\n Enter a string ");
    gets(str);
    strlwrX(str);
    printf("\n Output String = %s",str);
    _getch();
    return 0;
}

void strlwrX(char* src)
{
    int i = 0;
    while(src[i] !='\0')
    {
        if(src[i] >= 'A' && src[i] <= 'Z')
        {
            src[i] = src[i]+32;
        }
        i++;
    }
    return;
}
