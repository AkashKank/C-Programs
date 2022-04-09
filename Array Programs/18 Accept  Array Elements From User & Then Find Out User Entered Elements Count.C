#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 7

int main()
{

    int i = 0, No = 0, Cnt = 0, Value[Size] = {0};

    for(i = 0; i < Size; i++ )
    {

        printf("\n Enter Value No %d = ", (i+1));
        scanf("%d",&Value[i]);

    }
    _getch();

    printf("\n Enter Element Whose Count in Array Wish To Display = ");
    scanf("%d",&No);

    for(i = 0; i < Size; i++)
    {

        if(Value [i] == No)
        {
            Cnt++;
        }
    }

    printf("\n\n ============================================= \n");

    printf("\n Count of %d in Array is = %d.",No,Cnt);

    printf("\n\n ============================================= \n");

    _getch();
    return 0;
}
