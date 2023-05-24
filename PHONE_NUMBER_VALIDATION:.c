#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>99999999&&n<99999999999)printf("Valid");
    else printf("Invalid");
}