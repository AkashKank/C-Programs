#include<stdio.h>
#include<conio.h>
void strupprX(char* src);

int main()
{
    char str[20] = {};
    printf("\n Enter String ");
    gets(str);
    strupprX(str);
    printf("\n Output String = %s",str);
    getch();
    return 0;
}

void strupprX(char *src)
{
    int i = 0;
    while (src[i] !='\0')
    {
        if(src[i] >='a' && src[i] <= 'z')
        {
            src[i] = src[i]-32;
        }
        i++;
    }
    return;
}
