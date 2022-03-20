#include<stdio.h>
#include<conio.h>
int word_count(char *);

int main()
{
    int wcnt = 0;
 char str[40] = {};
 printf("\n Enter a String = ");
 gets(str);
 wcnt = word_count(str);
 printf("\n Word in Given  String = %d",wcnt);
 _getch();
 return 0;
}

int word_count(char *src)
{
    int i = 0, cnt = 0;
    while(src[i] != '\0')
    {
        if(src[i]=' '||src[i]=','||src[i]='.')
        {
            i++;
            continue;
        }
        cnt++;
        while(src[i]!=' '&&src[i]!=','&&src[i]!='.'&&src[i]!='/0')
        {
            i++;
        }
    }
    return cnt;
}
