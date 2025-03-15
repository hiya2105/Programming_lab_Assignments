#include<stdio.h>
int main()
{
	int a,b;
	printf("enter value of a=");
	scanf("%d",&a);
	printf("enter value of b=");
	scanf("%d",&b);
	printf("new value of b=");
	a=a+b;
	printf("%d \n",b=a-b);
	printf("new value of a=");
	printf("%d \n",a=a-b);
	return 0;
	
	
}