#include<stdio.h>
#include<conio.h>
#define Size 5

void Accept_Bills(int*);
void Display_Bills(int*);
int Even_Count(int*);
int Odd_Count(int*);
int Zero_Count(int*);

int main()
{
    int Bills[Size] = {}, Ret = 0;

    Accept_Bills(Bills);
    Display_Bills(Bills);

    Ret = Even_Count(Bills);
    printf("\n\n Even Bill Amount Count is = %d.",Ret);

    Ret = Odd_Count(Bills);
    printf("\n\n Odd Bill Amount Count is = %d.",Ret);

    Ret = Zero_Count(Bills);
    printf("\n\n Zero Bill Amount Count is = %d.",Ret);

    _getch();
    return 0;
}

int Even_Count(int* ptr)
{
    int ECount = 0, i = 0;

    for(i = 0; i < Size; i++)
    {
        if(ptr[i] != 0  && ptr[i] % 2 == 0)
        {
            ECount++;
        }
    }
    return ECount;
}

int Odd_Count(int* ptr)
{
    int OddCnt = 0, i = 0;

    for(i = 0; i < Size; i++)
    {
        if(ptr[i] % 2 == 1)
        {
            OddCnt++;
        }
    }
    return OddCnt;
}

int Zero_Count(int* ptr)
{
    int ZeroCnt = 0, i = 0;

    for(i = 0; i < Size; i++)
    {
        if(ptr[i] == 0)
        {
            ZeroCnt++;
        }
    }
    return ZeroCnt;
}

void Accept_Bills(int* ptr)
{
    for(int i = 0; i < Size; i++)
    {
        printf("\n Enter %d Bill = ", i+1);
        scanf("%d", &ptr[i]);
    }
    return;
}

void Display_Bills(int* ptr)
{
    for(int i = 0; i < Size; i++)
    {
        printf("\n Bill No %d = %d", i+1, ptr[i]);
    }
    return;
}


