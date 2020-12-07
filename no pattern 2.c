#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of rows in the number pattern:\n");
    scanf("%d",&n);
    int i,j;
    printf("NUMBER PATTERN 2\n");
    for(i=1;i<=n;i++)
    {
        printf("\n");
        for(j=1;j<=n;j++)
        {
            if(j%2==0)
                printf("1");
            else
                printf("0");
        }
    }
    return 0;
}
