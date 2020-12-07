#include<stdio.h>
int main()
{
    int n;
    printf("Enter any odd number which should be the number of rows:\n");
    scanf("%d",&n);
    printf("NUMBER PATTERN 4\n");
    int i,j;
    for(i=1;i<=n;i++)
    {
        printf("\n");
        if(i==(n+1)/2)
        {
            for(j=1;j<=n;j++)
            {
                if(j==(n+1)/2)
                    printf("0");
                else
                    printf("1");
            }
        }
        else
        {
            for(j=1;j<=n;j++)
            {
                printf("1");
            }
        }
    }
    return 0;
}
