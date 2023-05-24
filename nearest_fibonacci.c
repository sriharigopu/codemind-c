#include<stdio.h>
int fib(int n)
{
    int c,a=0,b=1,ct=0,i;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        if(c==n)
        {
            ct++;
            break;
        }
        a=b;
        b=c;
    }
    if(ct==0)return 0;
    else return 1;
}
int main()
{
    int n,i,d1=0,d2=0,nf1,nf2;
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        if(fib(i))
        {
            d1=i-n;
            nf1=i;
            break;
        }
    }
    for(i=n-1;;i--)
    {
        if(fib(i))
        {
            d2=n-i;
            nf2=i;
            break;
        }
    }
    if(d1<d2)printf("%d",nf1);
    else if(d2<d1)printf("%d",nf2);
    else printf("%d %d",nf2,nf1);
}