#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,ch;
	printf("enter the choice :");
	scanf("%d",&ch);
	
	a=10;
	b=38;
	c=a+b;
	d=a-b;
	e=a/b;
	f=a*b;
	g=a%b;
	
	switch(ch)
	{
		case 1:
		printf("the sum of two numbers :%d\n",c);
		break;
		
		case 2:
		printf("the difference of two numbers :%d\n",d);
		break;
		
		case 3:
		printf("the division of two numbers :%d\n",c);
		break;
		
		case 4:
		printf("the product of two numbers :%d\n",f);
		break;
		
		case 5:
		printf("the percentage of two numbers :%d\n",g);
		break;
		
	}
	return 0;
}
