#include <stdio.h>

int main(void) {
	int n,rev=0,r,a;
	printf("enter the number");
	scanf("%d",&n);
	a=n;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
		printf("%d\n",rev);
	return 0;
}
