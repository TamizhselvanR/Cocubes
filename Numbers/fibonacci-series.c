#include<stdio.h>
#include<conio.h>
void main()
{
	int t1 = 0,i,n,t2 = 1,nextint;
	printf("Enter the length of fibonacci series\n");
	scanf("%d",&n);
	printf("The fibonacci series is\n");
	while(i<=n)
	{
		nextint = t1+t2;
		printf("%d\n",t2);
		t1 = t2;
		t2 = nextint;
		i++;
	}
	getch();
}
