#include <stdio.h>
#include <stdlib.h>

int main()
{
//Practical 02
//QUESTION 1
    int age;
    printf("HI,HOW OLD ARE YOU?");
    scanf("%d",&age);
    printf("WELCOME%d\n",age);
    printf("LET'S BE FRIENDS!\n");

//Question 2
    printf("%5d%5d%5d\n",2,4,8);
    printf("%5d%5d%5d\n",3,9,27);
    printf("%5d%5d%5d\n",4,16,64);

//Question 3
    float distance,time,speed;
    printf("Enter the distance travelled");
    scanf("%f",&distance);
    printf("Enter the time");
    scanf("%f",&time);
    speed=distance/time;
    printf("Average speed=%.2f ms^-1\n",speed);

//Question 4
   float c,f;
   printf("Enter the temperature in Fahrenheit:");
   scanf("%f",&f);

   c=(f-32)*(5.0/9);
   printf("The temperature is %fc",c);

    return 0;
}


