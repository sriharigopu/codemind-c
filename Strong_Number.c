#include<stdio.h>
int main(){
    int n,r,s=0,i,q;
    scanf("%d",&n);
    q=n;
    while(n!=0)
    {
        r=n%10;
        int f=1;
        for(i=1;i<=r;i++)
        {
            f=f*i;
        }
          s=s+f;
          n=n/10;
    }
    n=q;
    if(s==q)
    {
        printf("The number %d is a strong number",n);
    }
    else 
    {
        printf("The number %d is not a strong number",n);
    }
}