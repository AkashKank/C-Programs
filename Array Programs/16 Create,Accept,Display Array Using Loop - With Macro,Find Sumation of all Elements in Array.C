#include<stdio.h>
#include<conio.h>
#define Size 7

void Accept_Bills(int*);
void Display_Bills(int*);
int Sum_Of_Elements(int*);

int main()
{
    int Bills[Size] = {}, Ret = 0;

    Accept_Bills(Bills);
    Display_Bills(Bills);

    Ret = Sum_Of_Elements(Bills);

    printf("\n\n Sum of all Bills is = %d.",Ret);

    _getch();
    return 0;
}

int Sum_Of_Elements(int* ptr)
{
    int Sum = 0, i = 0;

    for(i = 0; i < Size; i++)
    {
        Sum += ptr[i];
    }
    return Sum;
}

void Accept_Bills(int* ptr)
{
    for(int i = 0; i < Size; i++)
    {
        printf("\n Enter %d Bill = ", i+1);
        scanf("%d",&ptr[i]);
    }
    return;
}

void Display_Bills(int* ptr)
{
    for(int i = 0; i < Size; i++)
    {
        printf("\n Bill No %d = %d.", i+1, ptr[i]);
    }
    return;
}
