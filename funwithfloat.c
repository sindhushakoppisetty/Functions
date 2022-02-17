#include<stdio.h>
float pro(float a,float b)
{
	float c=a*b;
	return c;
}
void main()
{
	float a,b;
	scanf("%f%f",&a,&b);
	float pro= multi(a,b);
	printf("%f",pro);
}
