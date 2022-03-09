#include<stdio.h>
#include<conio.h>

int Find_Quotient(int,int);
int Find_Remainder(int,int);

int main()
{
    int No1=0,No2=0,Res=0,Temp=0;

    printf("\n Enter Two Numbers to Find Quotient and Remainder of them : ");
    scanf("%d%d",&No1,&No2);

    Res=Find_Quotient(No1,No2);
    Temp=Find_Remainder(No1,No2);

    printf("\n Quotient of Given Number is %d.",Res);
    printf("\n Remainder of Given Number is %d.",Temp);

    getche();
    return 0;
}

int Find_Quotient(int N1, int N2)
{
    return N1/N2;
}

int Find_Remainder(int N1, int N2)
{
    return N1%N2;
}
