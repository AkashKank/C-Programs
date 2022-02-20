#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int No1 = 0, Res = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&No1);

    Res = No1 >> 2;

    printf("\n Bitwise Right Shift is = %d >> 2 : %d",No1,Res);

    getch();
    return 0;
}
