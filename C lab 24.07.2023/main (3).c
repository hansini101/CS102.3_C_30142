#include <stdio.h>
#include <stdlib.h>
//3
int n(int x,int y)
{
    int product=y*x;
    return product;
}
int main()
{
    int x,y;
    printf("Enter two whole numbers ");
    scanf("%d %d",&x,&y);
    printf("Product is %d\n",n(x,y));
    return 0;
}
