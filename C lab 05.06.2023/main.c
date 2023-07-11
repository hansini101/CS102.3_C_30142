#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Practical 3
	//Question 1

    int x,y,high;
    printf("Enter two numbers : ");
    scanf("%d %d",&x,&y);
    if(x>y)
    printf("The highest number is %d",x);
    else
    printf("The highest number is %d",y);

	//Question 2
    int n1,n2,n3,max,low;
    printf("Enter three numbers :");
    scanf("%d %d %d",&n1,&n2,&n3);
    max=n1;
    if(n2>max)
    max=n2;
    if(n3>max)
    max=n3;
    printf("the highest number is %d\n",max);
    low=n2;
    if(n1<low)
    low=n1;
    if(n3<low)
    low=n3;
    printf("The lowest number is %d",low);

    //Question 3
    char empname[20];
    float bs,inc,ns;

    printf("Enter Employee name");
    scanf("%s",&empname);
    printf("Enter Basic salary");
    scanf("%f",&bs);

    if (bs>=10000)
    inc=bs*0.15;
    else if (bs>=5000)
    inc=bs*0.10;
    else
    inc=bs*0.05;

    ns=bs+inc;
    printf("Employee Name %s\n",empname);
    printf("New Salary %.2f\n",ns);

    //Question 4
    float radius;
    printf("Enter the Radius :");
    scanf("%f",& radius);

    printf("diameter is %.2f\n",radius*2.0);
    printf("circumference is %.2f\n",radius*2.0*3.14159);
    printf("area is %.2f\n",radius*radius*3.14159);

    //Question 5
    int x,y;

    printf("Enter Two numbers");
    scanf("%d %d",&x,&y);

    if(x%y==0)
    printf("%d is a multiple of %d",x,y);
    else
    printf("%d is not a multiple of %d",x,y);

    //Question 6
    printf("A=%d\n",'A');
    printf("B=%d\n",'B');
    printf("C=%d\n",'C');
    printf("a=%d\n",'a');
    printf("b=%d\n",'b');
    printf("c=%d\n",'c');
    printf("0=%d\n",'0');
    printf("1=%d\n",'1');
    printf("2=%d\n",'2');
    printf("$=%d\n",'$');
    printf("*=%d\n",'*');
    printf("+=%d\n",'+');
    printf("/=%d\n",'/');
    printf(" =%d\n",' ');

    //Question 7
    float basicSalary,monthlySales;
    int yearsOfService;
    char city;
    float additionalAllowance;
    float bonus;
    float grossRemuneration;

    printf("Enter the basic salary:");
    scanf("%f",&basicSalary);

    printf("Enter the number of years of service: ");
    scanf("%d",&yearsOfService);

    printf("Enter the city (Cfor Colombo,any other character for other cities): ");
    scanf("%c",&city);

    printf("Enter the monthly sales amount: ");
    scanf("%f",&monthlySales);

    if (yearsOfService>5){
        additionalAllowance = 0.1*basicSalary;
    }

    if(city=='C'){
        additionalAllowance =additionalAllowance+2500;
    }

    if(monthlySales >=0 &&monthlySales<=25000){
        bonus = 0.1*monthlySales;
    }

    else if(monthlySales>25000 && monthlySales <=50000){
        bonus=0.12*monthlySales;
    }

    else if (monthlySales>50000){
        bonus=0.15*monthlySales;
    }

    grossRemuneration = basicSalary + additionalAllowance + bonus;

    printf("Gross Monthly Remuneration %.2f\n",grossRemuneration);

    return 0;
}
