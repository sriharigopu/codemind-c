#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==1)return 1;
    else return 0;
}
int main()
{
    int n,i,d=0,d1=0;
    scanf("%d",&n);
    if(prime(n))
    {
        printf("0");
    }
    else 
    {
    for(i=n+1;;i++)
    {
        if(prime(i))
        {
            d=i-n;
            break;
        }
    }
    for(i=n-1;;i--)
    {
        if(prime(i))
        {
            d1=n-i;
            break;
        }
    }
    if(d<d1)printf("%d",d);
    else printf("%d",d1);
}
}