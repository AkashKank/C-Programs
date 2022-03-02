#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1 = 0,Num2 = 0,Res = 0;

    printf("\n Enter 2 Numbers for Addition : ");
    scanf("%d%d",&Num1,&Num2);

    Res = Add(Num1,Num2);

    printf("\n Addition of %d and %d is %d.\n",Num1,Num2,Res);
    printf("\n****************************************************************\n");

    printf("\n Enter 2 Numbers for Subtraction : ");
    scanf("%d%d",&Num1,&Num2);

    Res = Sub(Num1,Num2);

    printf("\n Subtraction of %d and %d is %d.\n",Num1,Num2,Res);
    printf("\n****************************************************************\n");

    getch();
    return 0;
}

int Add(N1,N2)
{
    int Ans = 0;

    Ans = N1 + N2;

    return Ans;
}

int Sub(N1,N2)
{
    int Ans = 0;

    Ans = N1 - N2;

    return Ans;
}
