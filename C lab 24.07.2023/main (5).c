#include <stdio.h>
#include <stdlib.h>
//5
void n()
{
    int a,b,sum;
    printf("Enter two numbers ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("The sum is %d\n",sum);
    return sum;
}
int main()
{
    n();
    n();
    n();
    n();
}
