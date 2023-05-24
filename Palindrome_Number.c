#include<stdio.h>
int main(){
    int a,r,q,n,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        int s=0;
        scanf("%d",&n);
        q=n;
        while(n>0)
        {
            r=n%10;
            s=s*10+r;
            n=n/10;
        }
        if(s==q)printf("True
");
        else printf("False
");
    }
}