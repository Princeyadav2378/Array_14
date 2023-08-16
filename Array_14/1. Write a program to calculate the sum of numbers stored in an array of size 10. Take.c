// 1. Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.

#include<stdio.h>
int main()
{
	int a[10],i,sum=0;
	printf("Enter 10 Number: ");
	for(i=0;i<=9;i++)
	{
		printf("\nEnter the number:%d\n",i+1);
		scanf("%d",&a[i]);
		sum =sum+a[i];
	}
	printf("Sum is = %d",sum);
	return 0;
}
