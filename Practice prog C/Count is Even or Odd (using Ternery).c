#include<stdio.h>
int main()
{
    int Num;

    printf("\n Enter Any Number:");
    scanf("%d",&Num);

    (Num%2 == 0)?
    (printf("\n %d is Even Number",Num)):
    (printf("\n %d is Odd Number",Num));

     return 0;
}
