#include<stdio.h>
int main()
{
int i,base,exponent,result=1;
printf("enter the base and exponent");
scanf("%d%d",&base,&exponent);
for(i=0;i<exponent;i++)
{
result=result*base;
i++;
}
printf("%d%d%d",base,exponent,i);
}
