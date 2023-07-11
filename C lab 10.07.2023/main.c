#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1
    int elements[10],i,max,min,sum=0;
    float avg;
    for (i=0;i<10;i++)
    {
        printf("Enter a value to the elements %d ",i++);
        scanf("%d",&elements[i]);
        sum=sum+elements[i];
        if(elements[i]>max)
        max=elements[0];
        min=elements[0];
        {
            if(elements[i]>max)
            max=elements[i];
        }
        if(elements[i]<min)
        {
            min=elements[i];
        }
    }
    {
    avg=(float)sum/10.0;
    printf("The average is .2f \n",avg);
    printf("The maximum is %d \n",max);
    printf("The minimum is %d \n",min);
    }
    for(i=9;i>=0;i--)
    {
      printf("Reverse order of values is %d \n",elements[i]);
    }
    return 0;
}
