#include<stdio.h>
int main()
{
    int n,i,s=0,d,r;
    scanf("%d",&n);
    d=n*n;
    while(d!=0)
    {
        r=d%10;
        s=s+r;
        d=d/10;
    }
    if(s==n)printf("Neon Number");
    else printf("Not Neon Number");
}