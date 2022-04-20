
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,x=0;
    printf("Enter No of Rows & Columns for Pattern:");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x;j++)
        {
            if(i+j<=x)
            {
                printf(" * ");
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
