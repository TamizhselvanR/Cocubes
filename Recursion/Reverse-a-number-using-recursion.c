#include<stdio.h>
#include<conio.h>
void main()
{
	int func(int);
	int num = 229,rem,sum = 0;
	printf("The reversed no is %d\n",func(num));
}
int sum = 0,rem;
int func(int num)
{
	if(num != 0)
	{
		rem = num%10;
		sum = sum*10 + rem;
		func(num/10); 
	}
	return sum;
}
