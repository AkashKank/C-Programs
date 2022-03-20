#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
bool Is_palindron(char *src);

int main()
{
 char str[40] = {};
 printf("\n Enter a String = ");
 gets(str);
 Is_palindron(str);
 printf("\n Palindron or Not = %s",str);
 _getch();
 return 0;
}

bool Is_palindron(char *str)
{
    char*end = str+strlen(str-1);
    while(str<end)
    {
        if((*str!=*end)&&(*str!=*end+32)&&(*str!=*end-32));
        {
            break;
        }
        str++;
        end--;
    }
    if(str >= end);
    return true;

    return false;
}

