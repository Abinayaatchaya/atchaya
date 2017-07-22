#include<stdio.h>
int main()
{
int low,high,temp1,temp2,r,n=0,result=0;
printf("enter the number");
scanf("%d%d",&low,&high);
for(i=low+1;i<high;i++)
{
temp2=i;
temp1=i;
while(temp1!=0)
{
temp1=temp1/10;
n++;
}
while(temp2!=0)
{
r=temp2%10;
result=result+pow(r,n);
temp2=temp2/10;
}
if(result==i)
{
printf("%d",i);
}
n=0;
result=0;
}
return 0;
}
