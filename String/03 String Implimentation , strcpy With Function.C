#include<stdio.h>
#include<conio.h>
void strcpyX(char*, char*);

int main()
{
    char str1[20] = {};
    char str2[20] = {};
    printf("\n Enter a String ");
    gets(str1);

    strcpyX(str1, str2);
    printf("\n Input = %s", str1);
    printf("\n Output = %s",str2);
    getch();
    return 0;
}

void strcpyX(char *src, char *Dest)
{
    int i = 0;
    while (src[i] !='\0')
    {
        Dest[i] = src[i];
        i++;
    }
    return;
}
