/*  2. Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.*/

#include<stdio.h>
int main()
{
	int a[10],i,sum=0;
	float avg;
	printf("Enter 10 Number: ");
	for(i=0;i<=9;i++) 
	{
	   printf("\nEnter number : %d\n",i+1);
	   scanf("%d",&a[i]);
	  sum =sum+a[i];
       }
	avg=sum/10.0;
	printf("\nsum is %d",sum);
	printf("\nAvg is = %f",avg);
	return 0;
}
