#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Practical 5
	//Section A

	//Question 4
   int num;
   printf("Enter the number:");
   scanf("%d",&num);
   int sum = 0;
   int remainder;
   while (num > 0)
  {
     remainder = num % 10;
     sum += remainder;
     num = num / 10;
   }
   printf("The sum of all digits of the given number =%d",sum);

	//Question 5
   int n1,n2;
   printf("Enter the number:");
   scanf("%d",&n1);

   do
   {
       n2=n1%10;
       printf("%d ",n2);
       n1=n1/10;
   }while(n1!=0);

	//Question 6
   int n,x,cal=1,count;
   printf("Enter the base :");
   scanf("%d",&x);
   printf("Enter the exponent :");
   scanf("%d",&n);

   for(count=1;count<=n;count++)
   {
       cal=cal*x;
   }
   printf("%dth power of the given base is : %d",n,cal);

	//Question 7
   int num=10;
   int first=0,second=1;
   int next;
   printf("Fibonacci Sequence:");
   for(int x=0;x<=num;x++)
   {
       if(x<=1)
       {
           next=x;
       }
       else
       {
           next=first+second;
           first=second;
           second=next;
       }
       printf("%d ",next);
   }
   printf("\num");

	//Question 8
     int x1,x,sum=0,cal,n,count=1,mod;
     printf("Enter a number :");
     scanf("%d",&x);
     x1=x;
     n=x;
     while(n!=0)
     {
       n=n/10;
       count++;

     }
     printf("%d",--count);

     while(x!=0)
     {
       mod=x%10;
       cal=pow(mod,count);
       sum=sum+cal;
       x=x/10;
     }
     printf("\n");
     if(x1==sum)
     printf("The given number is an armstrong number ");
     else
     printf("The given number is not an armstrong number");

	//Question 9
   char letter;
   printf("ASCII values for letters A to Z :\n");
   for(letter='A';letter<='Z';letter++)
   {
       printf("%c:%d\n",letter,letter);
   }

	//Question 10
   int rows=5;
   printf("Pattern:\n");
   for(int x=1;x<=rows;x++)
   {
       for(int y=1;y<=x;y++)
       {
           printf("*");
       }
       printf("\n");
   }

	//Question 11
   {int num,pnum;
   printf("Enter a number");
   scanf("%d",&num);
   if(pnum==1)
   {
       printf("%d is a prime number\n",num);
   }
   else
   {
       printf("%d is not a prime number\n",num);
   }
   return 0;
   }
   int num;
   if(num<=1)
   {
       return 0;
   }
   for(int i=2;i<=num/2;i++)
   {
       if(num%i==0)
       {
           return 0;
       }
       return 1;
   }


	//Question 12
   int num;
   printf("Enter an integer");
   scanf("%d",&num);
   printf("Factors are %d",num);
   for(int i=1;i<=num;i++)
   {
       if(num%i==0)
       {
           printf("%d",i);
       }
   }
   printf("\n");

	//Question 13
   int num,sum=0;
   printf("Enter the numbers(to stop enter-1)\n");
   while(1)
   {
       scanf("%d",&num);
       if(num==-1)
       {
           break;
       }
       sum+=num;
   }
   printf("Sum %d\n",sum);

	//Question 14
   int num[10];
   printf("Enter 10 numbers:\n");

   for (int i=0;i<10;i++)
   {
      scanf("%d",&num[i]);
   }
   printf("Entered numbers:\n");

   for (int i=0;i<10;i++)
   {
       printf("%d ", num[i]);
   }
 printf("\n");

	//Question 15
   int num[10];
   int evenCount=0;
   printf("Enter 10 numbers:\n");
   for (int i=0;i<10;i++)
   {
       scanf("%d", &num[i]);
       if (num[i]%2==0)
       {
           evenCount++;
       }
   }
 printf("Number of even numbers: %d\n", evenCount);


	//Section B
	//Question 1
    int num[10];
    int posCount=0, negCount=0, zeroCount=0;

    printf("Enter 10 numbers:\n");

    for (int i=0;i<10;i++)
    {
       scanf("%d",&num[i]);
       if (num[i] >0)
       {
          posCount++;
       }
       else if (num[i]<0)
       {
           negCount++;
       }
       else
       {
          zeroCount++;
       }
    }

    printf("Positive numbers: %d\n", posCount);
    printf("Negative numbers: %d\n", negCount);
    printf("Zeroes: %d\n", zeroCount);

	//Question 2
    int marks[10];
    int sum = 0;
    int max,min;
    printf("Enter marks of 10 students:\n");

    for (int i=0; i<10;i++)
    {
      scanf("%d",&marks[i]);
      sum += marks[i];
      if (i==0)
      {
         max= marks[i];
         min= marks[i];
      }
      else
      {
          if (marks[i] > max)
          {
              max=marks[i];
          }
          if (marks[i] < min)
          {
              min=marks[i];
          }
      }
    }
    double average = (double)sum/10;

    printf("Maximum marks: %d\n", max);
    printf("Minimum marks: %d\n", min);
    printf("Average marks: %.2f\n", average);

	//Question 3
    double prices[10];
    double sum = 0;
    int countGreaterThan200 = 0;
    printf("Enter the price of 10 items:\n");

    for (int i=0;i<10;i++)
    {
        scanf("%lf", &prices[i]);
        sum += prices[i];

        if (prices[i] > 200)
        {
           countGreaterThan200++;
        }
    }
    double average = sum / 10;
    printf("Average price: %.2lf\n", average);

	//Question 4
      int employeeNo;
      float basicSalary;
      int count = 0;
      printf("Enter the employee number and basic salary (-999 to end):\n");
      while (1) {
      printf("Employee No: ");
      scanf("%d", &employeeNo);
      if (employeeNo == -999)
      break;
      printf("Basic Salary: ");
      scanf("%f", &basicSalary);
      if (basicSalary >= 5000)
      count++;
      }
      printf("Number of employees with basic salary >= $5000: %d\n", count);

	//Question 5
      int empno=0, count1 = 0, count2 = 0;
      float ot=0, hours = 0,percen;

      while (1) {
      printf("Employee No: ");
      scanf("%d", &empno);
      if (empno == -999) {
      break;
      }
      count1++;
      printf("No of hours worked: ");
      scanf("%f", &hours);
      if (hours <= 40) {
      ot = hours * 150;
      } else {
      ot = hours * 200;
      }
      printf("Empolyee No: %d\n", empno);
      printf("Overtime Payment: %.2f\n", ot);
      if (ot >= 4000){
      count2++;
      }
      }
      percen = (float)(count2 / count1)*100;
      printf("Percentage: %.2f%%", percen);



    return 0;
}
