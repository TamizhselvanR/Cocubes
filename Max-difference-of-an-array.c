//Maximum difference between two elements such that larger element appears after the smaller number

//Given an array arr[] of integers, find out the difference between any two elements such that larger element appears after the smaller number in arr[].

//Examples: If array is [2, 3, 10, 6, 4, 8, 1] then returned value should be 8 (Diff between 10 and 2). If array is [ 7, 9, 5, 6, 3, 2 ] then returned value should be 2 (Diff between 7 and 9)
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10] = {7,9,5,6,3,2},i,n,j;
	n = sizeof(a)/sizeof(int);
	printf("The max difference is\n");
	int max_difference = a[1]-a[0]; 
	for(i = 0;i < n-1 ;i++)
	{
		for(j = i + 1;j < n;j++ )
		{
			if((a[j]-a[i]) > max_difference)
			{
				max_difference = a[j]-a[i];
			}
		}
			
	}
	printf("%d\n",max_difference);
	getch();
}
