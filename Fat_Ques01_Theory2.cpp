// Ques 1 - FAT Practice
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c;
	float d,p,q;
	printf("values of a,b,c?");
	scanf("%d %d %d",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0)
	{
		printf("real");
		p=(-b+sqrt(d))/(2*a);
		q=(-b-sqrt(d))/(2*a);
		printf("the roots are %f %f",p,q);
	}
	else if(d<0)
	printf("imaginary");
	else 
	{
		printf("real and equal");
		p=(-b+sqrt(d))/(2*a);
		q=(-b-sqrt(d))/(2*a);
		printf("the roots are %f %f",p,q);
	}
	//return 0;
}
