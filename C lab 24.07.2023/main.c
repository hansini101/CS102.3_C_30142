#include <stdio.h>
#include <stdlib.h>
//1
void n()
{
    int a,b,sum,sub;
    printf("Enter two number ");
    scanf("%d %d,&a,&b");
    sum=a+b;
    sum+a-b;
    printf("Total is %d\n",sum);
    printf("Difference is %d\n",sub);
}
int main()
{
    n();
    return 0;
}
