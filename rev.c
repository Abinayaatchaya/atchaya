#include<stdio.h>
int main()
{
int n,rev=0,r,a;
scanf("%d",&n);
a=n;
while(n>0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
  printf("%d%d",a,rev);
  }
  }
