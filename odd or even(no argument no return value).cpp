#include<stdio.h>
int oddoreven()
{
    int i,n;
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        printf("%d is even\n",i);
        else
        printf("%d is odd\n",i);
    }
}
    int main()
    {
        int n;
        printf("enter the range:");
        scanf("%d",&n);
        oddoreven();
    }
