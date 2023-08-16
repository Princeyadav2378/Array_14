// 7. Write a program to find second largest in an array.Take array values from the user.

#include<stdio.h>
int main()
{
	int size,i,max=0,max2=0;
	printf("Enter the Array");
	scanf("%d",&size);
	int arr[size];
	for(i=0;i<size;i++)
	  scanf("%d",&arr[i]);
		for(i=0;i<size;i++)
		{
			if(arr[i]>max)
			{
				max2=max;
				max=arr[i];
			}
			if(arr[i]!=max && arr[i]>max2)
			{
			max2=arr[i];
		       }
		}
		// largest or Second largest Number
		
		printf("Second largest number is = %d\n",max2);
	//	printf("largest Number is %d\n\n",max);
	return 0;
}
