#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1;
	func(i);
	getch();
}
int n = 50;
int func(int i)
{
	if(i<=n)
	{
		printf("%d\n",i);
		func(i+1);
	}
}
