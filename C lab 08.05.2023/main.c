#include <stdio.h>
#include <stdlib.h>

int main()
{
//Practical 1

//Question 1
    printf("My name is Hansini Samarathunga\n");
    printf("My school is St.Joseph's Balika Maha Vidyalaya\n");

//Question 2
    printf("*\n");
    printf("**\n");
    printf("***\n");
    printf("****\n");
    printf("*****\n");

//Question 3
    int v1;
    float v2;
    double v3;
    char v4;
    printf("Enter an integer value");
    scanf("%d",&v1);
    printf("Enter a float value");
    scanf("%f",&v2);
    printf("Enter a double value");
    scanf("%lf",&v3);
    printf("Enter a char value");
    scanf("%c",&v4);
    printf("Integer value=%d\n",v1);
    printf("Float value=%.2f\n",v2);
    printf("Double value=%.2f\n",v3);
    printf("Char value=%c\n",v4);

//Question 4
    int no1,no2,total;
    printf("Enter the First number");
    scanf("%d",&no1);
    printf("Enter the Second number");
    scanf("%d",&no2);
    total=no1+no2;
    printf("The total is %d",total);

//Question 5
    float no1,no2,avg;
    printf("Enter the first number");
    scanf("%f",&no1);
    printf("Enter the second number");
    scanf("%f",&no2);
    avg=(no1+no2)/2;
    printf("The average is %.2f",avg);

//Question 6
    char name[20];
    int byear,age;
    printf("Enter your name");
    scanf("%s",&name);
    printf("Enter your birthday");
    scanf("%d",&byear);
    age=2023-byear;
    printf("Student name is %s\n",name);
    printf("Age is %d\n",age);

//Question 7
    int n1,n2,n;
    printf("Enter the First number");
    scanf("%d",&n1);
    printf("Enter the Second number");
    scanf("%d",&n2);

    printf("Before swapping\nFirst number is %d\nSecond number is %d\n",n1,n2);

    n=n1;
    n1=n2;
    n2=n;

    printf("After swapping\nFirst number is %d\nSecond number is %d",n1,n2);

    return 0;
}
