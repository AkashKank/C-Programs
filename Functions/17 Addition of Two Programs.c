#include<stdio.h>
#include<conio.h>

int Add(int,int);

int main()
{
    int No1 = 0,No2 = 0;

    printf("\n Enter First Number : ");
    scanf("%d",&No1);
    printf("\n Enter Second Number : ");
    scanf("%d",&No2);

    Add(No1,No2);

    printf("\n Addition of Two Numbers is %d.",Add(No1,No2));
    getch();
    return 0;
}

int Add(int N1,int N2)
{
    int Sum = 0;

    Sum = N1+N2;

    return Sum;
}
