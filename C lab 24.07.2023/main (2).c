#include <stdio.h>
#include <stdlib.h>
//2
void n(int a,int b)
{
    int sum;
    int difference;
    sum=a+b;
    difference=a-b;
    printf("The total is %d\n",sum);
    printf("Difference is %d\n",difference);
}
int main()
{
    int a,b;
    printf("Enter two numbers ");
    scanf("%d %d",&a,&b);
    n(a,b);
    return 0;
}
