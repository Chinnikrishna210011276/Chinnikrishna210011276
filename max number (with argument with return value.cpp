#include<stdio.h>
int  maax()
{
    int a,b;
    printf("enter two values to check max:");
    scanf("%d%d",&a,&b);
    if(a>b)
    return a;
    else
    return b;
    
}
int main()
{
    int max;
    max=maax();
    printf("%d is the max number",max);
    
}
