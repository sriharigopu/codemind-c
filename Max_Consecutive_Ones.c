#include<stdio.h>
int main()
{
        int n,max=0,i,j;
        scanf("%d",&n);
        int x[n];
        for(i=0;i<n;i++)
            scanf("%d",&x[i]);
            for(i=0;i<n;i++)
            {
                int c=0;
        for(j=i;j<n;j++)
        {
         if(x[j]==1) c++;
         else break;
        }
        if(c>max) max=c;
    }
    printf("%d",max);
}