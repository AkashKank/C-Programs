#include<stdio.h>
#include<conio.h>

#define Size 7

void Accept_Bills(int*);
void Display_Bills(int*);
int Find_Max(int*);

int main()
{
    int Bills[Size] = {}, Ret = -2;

    Accept_Bills(Bills);
    Display_Bills(Bills);
    Ret = Find_Max(Bills);

    printf("\n Maximum Amount in Bill is = %d", Ret);

    _getch();
    return 0;
}

int Find_Max(int* ptr)
{
    int Max = 0, i = 0;


    for( i = 0; i < Size; i++ )
    {
        if( (i == 0) || (Max < ptr[i]))
        {
            Max = ptr[i];
        }
    }

    return Max;
}

void Accept_Bills(int *ptr)
{
    for(int i = 0; i < Size; i++)
    {
        printf("\n Enter %d Bill = ", i+1);
        scanf("%d", &ptr[i]);
    }
    return;
}

void Display_Bills(int *ptr)
{
    for(int i = 0; i < Size; i++)
    {
        printf("\n Bill No %d = %d",i+1, ptr[i]);
    }
    return;
}



