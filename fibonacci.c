#include<stdio.h>
int main()
{
int i,n,first=0,second=1,next;
printf("enter the series");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n",first);
next=first+second;
first=second;
second=next;
}
return 0;
}
