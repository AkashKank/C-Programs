#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
     int No1 = 0, Res = 0;

        printf("\n Enter a Number = ");
        scanf("%d",&No1);

        Res = -No1;

        printf("\n Bitwise Compliment Between %d ^ %d = %d",No1,Res);

        return 0;
}
