#include<stdio.h>
#include<conio.h>
#define Size 3

void Accept_Bills(int*);
void Display_Bills(int*);
int Find_Max(int*);

int main()
{
    int Bills[Size] = {}, Ret = 0 ,Temp = 0;

    Accept_Bills(Bills);
    Display_Bills(Bills);

    Ret = Find_Max(Bills);

    printf("\n\n Maximum No in Array = %d.",Ret);

    for(int i = 0; i < Size; i++)
    {
        if(Temp < Bills[i] && Bills[i] != Ret)
        {
            Temp = Bills[i];
        }
    }
    printf("\n\nSecond Maximum No in Array = %d",Temp);

    getch();
    return 0;

}

int Find_Max(int* ptr)
{
    int  i = 0, Max = 0, Max2nd = 0;

    for(i = 0; i < Size; i++)
    {
        if(ptr[i] == ptr[i-1] || Max == ptr[i])
        {
           continue;
        }
        else if((Max2nd < ptr[i] || Max == Max2nd) && (ptr[i] != Max))
        {
            Max2nd = ptr[i];
        }
    }
    return Max2nd;
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
