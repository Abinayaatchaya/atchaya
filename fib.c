#include<stdio.h>
int main()
{
int i,first=0,second=1,next,n;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
next=first+second;
first=second;
second=next;
printf("%d",next);
}
return 0;
}
