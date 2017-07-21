#include<stdio.h>
int main()
{
int num,temp,reverse=0,digit;
printf("enter the number");
scanf("%d",&num);
temp=num;
if(num!=0)
{
digit=num%10;
reverse=reverse*10+digit;
num=num/10;
}
if(num==temp)
print("%d is a palindrome",num);
else
printf("%d is not a palindrome",num);
return 0;
}
