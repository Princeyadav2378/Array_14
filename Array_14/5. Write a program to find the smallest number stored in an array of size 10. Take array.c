/* 5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user.*/
#include<stdio.h>
int main()
{
	int a[10],i,min;
	printf("Enter 10 Arrays: \n");
	for(i=0;i<=9;i++)
	{
	    scanf("%d",&a[i]);
	    min=a[0];
       }
	for(i=1;i<=9;i++)
	{
		if(min>a[i])
		min=a[i];
	}
	printf("Smallest Number is %d",min);
	return 0;
}
