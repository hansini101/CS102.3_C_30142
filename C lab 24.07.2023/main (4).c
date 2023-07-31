#include <stdio.h>
#include <stdlib.h>
//4
float n(float x,float y)
{
    float quotient=x/y;
    return quotient;
}
int main()
{
    float x,y;
    printf("Enter two whole numbers ");
    scanf("%d %d",&x,&y);
    printf("Quotient is %.2f",n(x,y));
    return 0;
}
