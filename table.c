#include<stdio.h>
int main()
{
int i,n,table=1;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
table=n*i;
printf("%d",table);
printf("\n");
}
return 0;
}
