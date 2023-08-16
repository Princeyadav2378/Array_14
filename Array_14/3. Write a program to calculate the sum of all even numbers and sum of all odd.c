/*  3. Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.*/


#include<stdio.h>
int main()
{
	int a[10],i,s_even=0,s_odd=0;
	printf("Enter 10 Number: ");
	for(i=0;i<=9;i++) 
	{
	   printf("Enter number : %d\n",i+1);
	   scanf("%d",&a[i]);
	   if(a[i]%2==0)
	     s_even=s_even+a[i];
	   else
	     s_odd=s_odd+a[i];
       }
	printf("\nSum of even is %d",s_even);
	printf("\nSum of odd is = %d",s_odd);
	return 0;
}
