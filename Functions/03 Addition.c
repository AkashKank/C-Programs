#include<stdio.h>
#include<conio.h>

void Add(int,int);

int main()
{
    int N1 = 0,N2 = 0;

    printf("\n Enter Two Numbers for Addition : ");
    scanf("%d%d",&N1,&N2);

    Add(N1,N2);

    getch();
    return 0;
}

void Add(int N1,int N2)
{
    int Sum = 0;
    Sum = N1 + N2;
    printf("\n\n Addition of %d and %d = %d",N1,N2,Sum);

    return;
}
