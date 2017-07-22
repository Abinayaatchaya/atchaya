#include<stdio.h>
int main()
{
int i,num,fact=1;
printf("enter the number");
scanf("%d",&num);
for(i=1;i<=5;i++)
{
fact=fact*i;
}
printf("%d",fact);
return 0;
}
