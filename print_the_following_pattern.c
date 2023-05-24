#include<stdio.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    char i;
    for(i=65;i<=65+n-1;i++)
    {
        for(j=65;j<=65+n-1;j++)
        {
            printf("%c ",i);
        }
        printf("
");
    }
}