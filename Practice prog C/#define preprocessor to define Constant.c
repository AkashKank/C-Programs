#include<stdio.h>

#define Length 10
#define Width 5
#define Newline '\n'

int main()
{
    int area;

    area = Length * Width;
    printf("\n Value of Area :%d",area);
    printf("%c",Newline);
    printf("\n Here is Newline 1");
    printf("%c",Newline);
    printf("\n Here is Second Newline 2");
    printf("%c",Newline);

    return 0;
}


