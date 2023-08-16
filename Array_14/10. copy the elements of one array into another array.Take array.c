// 10. Write a program in C to copy the elements of one array into another array.Take array values from the user
#include<stdio.h>
int main()
{
	int size,i;
	printf("Enter the size of the array: \n");
	scanf("%d",&size);
	int a[size],b[size];
	printf("Enter the array element are: \n");
	for(i=0;i<size;i++)
	  scanf("%d",&a[i]);
	  
	 // Copy element  from array a to b
	for(i=0;i<size;i++)
	    b[i]=a[i];
	    
	printf("The Copied array element are: \n");
	for(i=0;i<size;i++)
	   printf(" %d",b[i]);
	return 0;

}
