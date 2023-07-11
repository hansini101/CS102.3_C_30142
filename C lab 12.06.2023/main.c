#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Practical 4
	//Question 1
    //Part 1
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%2==0)
    printf("The %d is an even number",n);
    else
    printf("The %d is an odd number",n);

    //Part 2
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    switch(n%2)
    {
        case 0:printf("%d is an even number",n);break;
        case 1:printf("%d is an odd number",n);break;
    }

	//Question 2
    float n1, n2;
    char symbol[2];
    printf("\nEnter First Number: ");
    scanf("%f", &n1);
    printf("Select the Calculation Operator: \n");
    printf("+, -, /, * : \n");
    scanf("%s", symbol);
    printf("Enter Second Number: ");
    scanf("%f", &n2);
    switch (symbol[0])
    {
        case '+':
            printf("%.2f",n1+n2);
            break;
        case '-':
            printf("%.2f",n1-n2);
            break;
        case '*':
            printf("%.2f",n1*n2);
            break;
        case '/':
            printf("%.2f",n1/n2);
            break;
    }

    //Question 3
    char d;
    printf("Enter 'c' for circumference|'a'for area|'v' for volume: ");
    scanf("%c",&d);

    float r;
    printf("Enter radius: ");
    scanf("%f",&r);

    switch(d){
         case'c':printf("Circumference: %.2f\n",2*3.14*r);break;
         case'a':printf("Area: %.2f\n",3.14*r*r);break;
         case'v':printf("Volume: %.2f\n",4/3*3.14*r*r*r);break;
         default:printf("Invalid choice\n");
    }

    //Question 4
    char vow;
    printf("Enter a letter :");
    scanf("%c",&vow);
    switch(vow)
    {
        case'a':printf("The entered letter is a vowel");break;
        case'e':printf("The entered letter is a vowel");break;
        case'i':printf("The entered letter is a vowel");break;
        case'o':printf("The entered letter is a vowel");break;
        case'u':printf("The entered letter is a vowel");break;
        default:printf("The entered letter is not a vowel");break;
    }

    //Question 5
    int mon;
    printf("Enter a month number :");
    scanf("%d",&mon);
    switch(mon)
    {
        case 1:printf("January  31 total days in the month ");break;
        case 2:printf("February \n 28 total days in the month ");break;
        case 3:printf("March \n 31 total days in the month ");break;
        case 4:printf("April\n 30 total days in the month ");break;
        case 5:printf("May\n 31 total days in the month ");break;
        case 6:printf("June\n 30 total days in the month ");break;
        case 7:printf("July\n 31 total days in the month ");break;
        case 8:printf("August\n 31 total days in the month ");break;
        case 9:printf("September\n 30 total days in the month ");break;
        case 10:printf("October\n 31 total days in the month ");break;
        case 11:printf("November\n 30 total days in the month ");break;
        case 12:printf("December\n 31 total days in the month ");break;
        default:printf("invalid");
    }
    return 0;
}
