#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int i = 0, j = 0,Values[7] = {0};

    for(i = 0, j = 1; i < 7; i++, j++)
    {
       printf("\n Enter Element No %d in Array = ",j);
       scanf("%d",&Values[i]);
    }

    _getch();
    system("cls");

    for(i = 0, j = 1; i < 7; i++, j++)
    {
        printf("\n Value of %d Element in Array is = %d",j,Values[i]);
    }
    _getch();
    return 0;
}
