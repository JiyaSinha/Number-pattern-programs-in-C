#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows in number pattern:\n");
    scanf("%d",&n);
    int i,j;
    printf("SQUARE NUMBER PATTERN\n");
    for(i=1;i<=n;i++)
    {
        printf("\n");
        for(j=1;j<=n;j++)
            printf("1");
    }
    return 0;
}
