#include<stdio.h>
int main()
{
    int a,b,c,no;
    printf("enter the palindrome ");
    scanf("%d",&no);
    a=no%10;
    no=no/10;
    b=no%10;
    c=no/10;
    if(a==c && c==a && b==b)
        printf("it is a palindrome");
       else    
        printf("not a palindrome");
        return 0;
    
}
