#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int No1 = 0, No2 = 0, Res = 0;

    printf("\n Enter Two Numbers = ");
    scanf("%d%d",&No1,&No2);

    Res = No1 ^ No2;

    printf("\n Bitwise EX-OR Between %d and %d = %d",No1,No2,Res);

    getch();
    return 0;

}

/*
     Binary of 83 = 01010011
     Binary of 71 = 01000111
                   __________
                    00010100
    Decimal No = 20
*/
