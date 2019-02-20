#include<stdio.h>
#include<conio.h>
void main()
{
	int lcm(int a,int b);
	int a=30,b=9,res;
	res = lcm(a,b);
	printf("The lcm of two numbers is %d\n",res);
	getch();
}
int lcm(int a,int b)
{
	static int temp = 1;
	if(temp % a == 0 && temp  % b == 0)
	{
		return temp;
	}
	else
	{
		temp++;
		return lcm(a,b);
	}
}
