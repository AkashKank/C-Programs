#include<stdio.h>
#include<conio.h>
#define Size 5

void Accept_Bills(int*);
void Display_Bills(int*);
int Zero_Count(int*);

int main()
{
    int Bills[Size] = {}, Ret = 0;

    Accept_Bills(Bills);
    Display_Bills(Bills);

    Ret = Zero_Count(Bills);

    printf("\n\n Zero Bill Amount Count is = %d.", Ret);

    _getch();
    return 0;
}

int Zero_Count(int *ptr)
{
    int ZCount = 0, i = 0;

    for(i = 0; i < Size; i++)
    {
        if(ptr[i] == 0)
        {
            ZCount++;
        }
    }
    return ZCount;
}

void Accept_Bills(int *ptr)
{
  for(int i = 0; i < Size; i++)
  {
      printf("\n Enter %d Bill = ", i+1);
      scanf("%d",&ptr[i]);
  }
  return;
}

void Display_Bills(int *ptr)
{
    for(int i = 0; i < Size; i++)
    {
        printf("\n Bill No %d = %d.", i+1, ptr[i]);
    }
    return;
}

