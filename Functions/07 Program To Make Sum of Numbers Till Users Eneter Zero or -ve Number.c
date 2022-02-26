#include<stdio.h>
#include<conio.h>

void Sum_Calculator();
int Sum = 0;
int main()
{
    Sum_Calculator();

    printf("\n Sum of Entered Number( 0 or Negative to Stop) : ");
    return 0;
}

void Sum_Calculator()
{
    while(1)
    {
        int No = 0;
        printf("\n Enter a Number : ");
        scanf("%d",&No);
        if(No<=0)
        {
            break;
        }
        Sum = Sum + No;
    }
    printf("\n Sum = %d",Sum);
    return Sum;
}
