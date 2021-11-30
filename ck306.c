#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter two angles of triangles");
	scanf("%d%d",&a,&b);
	c=180-(a+b);
	printf("trird angle of the triangle=%d",c);
	return 0;
	
}
