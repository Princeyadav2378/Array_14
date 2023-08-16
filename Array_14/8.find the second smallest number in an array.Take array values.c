// 8. Write a program to find the second smallest number in an array.Take array values from the user
#include<stdio.h>
int main()
{
	int size,i,min=0,min2=0;
	printf("Enter size of Arrays");
	scanf("%d",&size);
	printf("Enter the Arrays");
	int a[size];

	  for(i=0;i<size;i++)
        	scanf("%d",&a[i]);
        	
       min=a[0];
       min2=a[1];
       if(min2<min)
       {
       	min2=min;
       	min=a[1];
	}
	  for(i=2;i<size;i++)
	  {
	  	if(a[i]<min)
	  	{
	  		min2=min;
	  		min=a[i];
		}
		else if(a[i]!=min && a[i]<min2)
		{
		min2=a[i];
	       }
	  }
	  printf("Second smallest Number is  %d ",min2);
	  return 0;
}
