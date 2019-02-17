#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10] = {1,18,3,5,2,1},i,n,j;
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
