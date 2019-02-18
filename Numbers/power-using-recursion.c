#include<stdio.h>
#include<conio.h>
void main()
{
	int num=2,exp=3;
	printf("The %d power of the %d is %d\n",exp,num,power(num,exp));
	getch();
	int power(int num,int exp);
}
int power(int num,int exp)
{
	if(exp == 1)
	{
		return num;
	}
	else if(exp == 0)
	{
		return 1;
	}
	else
	{
		return num*pow(num,exp-1);
	}
}
