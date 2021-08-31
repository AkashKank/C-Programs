#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int Values[7] = {0}, i = 0;

    printf("\n Enter Element No 1 in Array = ");
    scanf("%d",&Values[0]);

    printf("\n Enter Element No 2 in Array = ");
    scanf("%d",&Values[1]);

    printf("\n Enter Element No 3 in Array = ");
    scanf("%d",&Values[2]);

    printf("\n Enter Element No 4 in Array = ");
    scanf("%d",&Values[3]);

    printf("\n Enter Element No 5 in Array = ");
    scanf("%d",&Values[4]);

    printf("\n Enter Element No 6 in Array = ");
    scanf("%d",&Values[5]);

    printf("\n Enter Element No 7 in Array = ");
    scanf("%d",&Values[6]);

    _getch();
    system("cls");

    printf("\n Value of %d Element is = %d",i++,Values[0]);
    printf("\n Value of %d Element is = %d",i++,Values[1]);
    printf("\n Value of %d Element is = %d",i++,Values[2]);
    printf("\n Value of %d Element is = %d",i++,Values[3]);
    printf("\n Value of %d Element is = %d",i++,Values[4]);
    printf("\n Value of %d Element is = %d",i++,Values[5]);
    printf("\n Value of %d Element is = %d",i++,Values[6]);

    _getch();
    return 0;

}
