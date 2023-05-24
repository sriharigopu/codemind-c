#include<stdio.h>
int main()
{
    int n,m,i,t=0,c=0,q,r;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        q=i;
        c=0;
        t=0;
    while(q!=0)
    {
        c++;
        r=q%10;
        if(r!=0&&i%r==0)
        t++;
        q=q/10;
    }
    if(t==c)printf("%d ",i);
    }
}