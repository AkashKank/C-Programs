#include<stdio.h>
#include<conio.h>

#define Size 7

void Accept_Bills(int*);
void Display_Bills(int*);
int Search_Bill(int*);

int main()
{
    int Bills[Size] = {}, Location = -2;

    Accept_Bills(Bills);
    Display_Bills(Bills);
    Location = Search_Bill(Bills);

    if(Location < 0)
    {
        printf("\n Element Not Found!!!");
    }
    else
    {
        printf("\n Given Bill Found at Location %d.",Location + 1);
    }

    _getch();
    return 0;
}

int Search_Bill(int* ptr)
{
    int Src_Ele = 0, i = 0;

    printf("\n\n Enter Bill Amount to Search = ");
    scanf("%d", &Src_Ele);

    for( i = 0; i < Size; i++ )
    {
        if(Src_Ele == ptr[i])
        {
            break;
        }
    }
    if(i == Size)
    {
        i =  -1;
    }
    return i;
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
