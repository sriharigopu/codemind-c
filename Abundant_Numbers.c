#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d",&n);
    t=n;
    int i,f=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            
        
        f=f+i;
        }
    }
    if(f>t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}