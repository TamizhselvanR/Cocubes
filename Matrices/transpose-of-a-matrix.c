#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j,b[3][3],c[3][3];
	printf("Enter the elements of matrix A\n");
	for(i = 0;i < 3;i ++)
	{
		for(j = 0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix is\n");
	for(i = 0;i < 3;i ++)
	{
		for(j = 0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i = 0;i < 3;i ++)
	{
		for(j = 0;j<3;j++)
		{
			b[j][i] = a[i][j];
		}
	}
	printf("The sum is\n");
	for(i = 0;i < 3;i ++)
	{
		for(j = 0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	getch();
}
