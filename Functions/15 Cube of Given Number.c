#include<stdio.h>
#include<conio.h>

int Cube_Function(int);

int main()
{
    int No1,Res;
    printf("\n Enter a Number : ");
    scanf("%d",&No1);

    Res = Cube_Function(No1);

    printf("\n Cube of %d is = %d",No1,Res);
}

int Cube_Function(int N1)
{
    return N1*N1*N1;
}
