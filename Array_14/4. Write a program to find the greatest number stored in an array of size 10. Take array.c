/*  4. Write a program to find the greatest number stored in an array of size 10. Take array values from the user.*/
#include<stdio.h>
int main()
{
	int a[10],i,greatest;
	printf("Enter 10 Number: ");
	for(i=0;i<=9;i++) 
	{
	   scanf("%d",&a[i]);
	   
	   if(a[i]>greatest)
	     greatest=a[i];
       }
	   printf("\nGreatest Number is = %d",greatest);
	return 0;
}
