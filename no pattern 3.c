#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows in the number pattern:\n");
    scanf("%d",&n);
    int i,j;
    printf("NUMBER PATTERN 3\n");
    for(i=1;i<=n;i++)
    {
        printf("\n");
        if(i==1||i==n)
        {
            for(j=1;j<=n;j++)
                printf("1");
        }
        else
        {
            printf("1");
            for(j=1;j<=n-2;j++)
                printf("0");
            printf("1");
        }
    }
    return 0;
}
