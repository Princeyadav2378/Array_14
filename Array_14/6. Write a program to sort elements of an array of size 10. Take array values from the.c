// 6. Write a program to sort elements of an array of size 10. Take array values from the user.

#include<stdio.h>
int main()
{
	int a[10];//={8,5,35,4,9,70,25,6,16,18};
	int i,j,temp;
	printf("Enter 10 Number: ");
	
	// User input Value
	for(i=0;i<10;i++)
	{
	       scanf("%d",&a[i]);
       }
       
       //Bubble sort algorithm
       for(i=0;i<=9;i++)
       {
       	for(j=i+1;j<=9;j++)
       	{
       		if(a[i]>a[j])
       		{
       		   // Swap Values
       		  temp=a[i];
       		  a[i]=a[j];
       		  a[j]=temp;
       	       }
		}
	}
	
	//Print Sorted Array
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
