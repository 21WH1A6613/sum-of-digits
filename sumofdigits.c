#include<stdio.h>
int sum(int a);
int main()
{
	int n,rem,sum=0;
	printf("enter integer: ");
	scanf("%d",&n);
	while (n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("sum is %d",sum);
}
