#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,i,t=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(c==n)
        {
            t++;
        }
    }
        if(t==0)
            printf("False");
         else
            printf("True");
}