#include<stdio.h>
#include<conio.h>
void main()
{
	int func(int);
	int num = 229,rem,sum = 0;
	printf("The sum of digits is %d\n",func(num));
}

int func(int num)
{
	if(num != 0)
	{
		return (num%10 + func(num/10)); 
	}
	else
	{
		return 0;
	}
}
