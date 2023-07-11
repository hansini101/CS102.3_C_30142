#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Practical 5
	//Section A
	//Question 1
//while
    int x=1;
    while(x<=100)
    {
        printf("%d ",x);
        x++;
    }

//do while
    int x=1;
    do
    {
        printf("%d ",x);
        x++;
    }while(x<=100);

//for
    int x=1;
    for(x=1;x<=100;x++)
    {
        printf("%d ",x);
    }

    //Question 2
    int total=0,no[10],count;
    float ave;
    for(count=1;count<=10;count++)
    {
        printf("enter %d mark:",count);
        scanf("%d",&no[count]);
        total=total+no[count];
    }
    ave=(float)total/10.0;
    printf("The total of 10 marks is %d\n",total);
    printf("The average of 10 marks is %.2f\n",ave);

    if(ave<50)
    printf("Fail!");
    else
    printf("Pass!");

	//Question 3
    int i,num,fact=1;
    printf("Enter num:");
    scanf("%d",&num);
    i=num;

    for(i;i>=1;i--)
    {
        printf("%d",i);
        fact+fact*i;
    }

    printf("Factional of given number is %d",fact);


    return 0;
}
