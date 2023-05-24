#include<stdio.h>
int pal(int n)
{
    int r,s=0,q;
    q=n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(s==q) return 1;
    else return 0;
}
int main()
{
    int n,i,d1=0,d2=0,cp2,cp1,j;
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        if(pal(i))
        {
            d1=i-n;
            cp1=i;
            break;
        }
    }
    for(i=n-1;;i--)
    {
        if(pal(i))
        {
            d2=n-i;
            cp2=i;
            break;
        }
    }
    if(d1<d2)printf("%d",cp1);
    else if(d2<d1)printf("%d",cp2);
    else printf("%d %d",cp2,cp1);
}