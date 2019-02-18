//Write a program to print all the LEADERS in the array. An element is leader if it is greater than all the elements to its right side.

//And the rightmost element is always a leader. For example int the array {16, 19, 4, 3, 8, 3}, leaders are 19, 8 and 3?

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10] = {1,18,5,2,1,6,4,3},i,n,j;
	n = sizeof(a)/sizeof(int);
	printf("The leaders are\n");
	for(i = 0;i < n-1 ;i++)
	{
		int flag = 0;
		for(j = i + 1;j < n;j++ )
		{
			if(a[i]>a[j])
			{
				flag++;
			}
		}
		if(flag == n-1-i)
		{
			printf("%d\n",a[i]);
		}
	}
	getch();
}
