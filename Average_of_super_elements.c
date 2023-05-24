#include<stdio.h>
int main()
{
    int n,i,j,y[100],s=0,t=0,c=0;
    float sum=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        int f=0;
        scanf("%d",&x[i]);
        for(j=0;j<s;j++)
        {
            if(x[i]==x[j])
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            y[s]=x[i];
            s++;
        }
    }
    for(j=0;j<s;j++)
    {
        c=0;
        for(i=0;i<n;i++)
        {
            if(y[j]==x[i]) c++;
        }
        if(c==y[j]) 
        {
            sum+=y[j];
            t++;
        }
    }
    if(t>0) printf("%.2f",(float)(sum/t));
    else printf("-1");
}