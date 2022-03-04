#include<stdio.h>
#include<conio.h>

int Squareroot_Function(int);

int main()
{
    int No1,Res;
    printf("\n Enter a Number : ");
    scanf("%d",&No1);

    Res = Squareroot_Function(No1);

    printf("\n Square Root of %d is = %d",No1,Res);

    return 0;
    getch();
}

int Squareroot_Function(int N1)
{
    float temp,sqroot;
    sqroot = N1/2;
    temp = 0;

    while(sqroot != temp)
    {
        temp = sqroot;
        sqroot = (N1/temp+ temp)/2;
    }

    return sqroot;
}
