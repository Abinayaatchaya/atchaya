#include<stdio.h>
int main()
{
int i,num,count,low,high;
printf("enter the number");
scanf("%d%d",&low,&high);
for(num=low;num<=high;num++)
{
count=0;
for(i=2;i<=num/2;i++)
{
if(num%i==0)
{
count++;
break;
}
}
if(count==0&&num!=1)
print("%d",num);
}
return 0;
}
