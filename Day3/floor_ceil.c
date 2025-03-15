#include<stdio.h>
#include<math.h>
int main()
{
	float n,f,c;
	printf("enter a number:");
	scanf("%f",&n);
	f=floor(n);
	c=ceil(n);
	printf("floor value of number:%f",f);
	printf("ceil value of number:%f",c);
	return 0;
	
}
