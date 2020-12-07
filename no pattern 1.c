#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows in the pattern:\n");
    scanf("%d",&n);
    int i,j;
    printf("NUMBER PATTERN 1\n");
    for(i=1;i<=n;i++)
    {
        printf("\n");
        if(i%2==0)
        {
            for(j=1;j<=n;j++)
                printf("0");
        }
        else
        {
            for(j=1;j<=n;j++)
                printf("1");
        }
    }
    return 0;
}
