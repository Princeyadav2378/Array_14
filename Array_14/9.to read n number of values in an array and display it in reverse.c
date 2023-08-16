/* 9. Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.*/
#include<stdio.h>
int main()
{
	int size,i;
	printf("Enter the size of the Array \n");
	scanf("%d",&size);
	int a[size];
	printf("Enter the Element of Array: \n");
	for(i=0;i<size;i++)
	  scanf("%d",&a[i]);
	  printf("\n Before Reverse in array\n");
	  for(i=0;i<size;i++)
	  printf(" %d",a[i]);
	  printf("\n The array element in reverse order are : \n");
	for(i=size-1;i>=0;i--)
		printf(" %d",a[i]);
	return 0;
}

