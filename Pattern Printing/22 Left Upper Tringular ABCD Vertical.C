#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,x=0;
    char ch='A';
    printf("Enter No of Rows & Columns for Pattern:");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        for(ch='A',j=1;j<=x;j++,ch++)
        {
            if(i>=j)
            {
                printf(" %c ",ch);
                ch++;
            }
        else
        {
            printf("   ");
        }

        }
        printf("\n");
    }
    _getch();
    return 0;
}
