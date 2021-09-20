#include<stdio.h>
#include<conio.h>

#define Size 7

void Accept_Bills(int*);
void Display_Bills(int*);
int Count_Element(int*);

int main()
{
    int Bills[Size] = {}, Cnt = -2;

    Accept_Bills(Bills);
    Display_Bills(Bills);
    Cnt = Count_Element(Bills);

    if(Cnt < 0)
    {
        printf("\n Entered Element is Not Found!!!");
    }
    else
    {
        printf("\n Entered Bill Found %d Times",Cnt);
    }

    _getch();
    return 0;
}

int Count_Element(int* ptr)
{
    int Src_Ele = 0, i = 0, Count = 0;

    printf("\n\n Enter Bill Amount to Search = ");
    scanf("%d", &Src_Ele);

    for( i = 0; i < Size; i++ )
    {
        if(Src_Ele == ptr[i])
        {
            Count++;
        }
    }

    return Count;
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


