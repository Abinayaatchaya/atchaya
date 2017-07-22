#include<stdio.h>
int main()
{
int num,m=20,n=40;
printf("print the odd numbers in the range between m to n \n");
for(num=m;num<=n;num++)
{
if(num%2==1)
printf("%d",num);
}
return 0;
}
