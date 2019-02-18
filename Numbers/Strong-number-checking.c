#include<stdio.h>
#include<conio.h>
void main()
{
	int num = 4058544,i,temp,rem,fact,sum = 0;
	printf("The sum of digits is \n");
	temp = num;
	while(num)
	{
		i = fact = 1;
		rem = num%10;
		while(i<=rem)
		{
			fact =  fact * i;
			i++;
		}
		sum = sum + fact;
		num /= 10;
	}
	if(temp == sum)
	{
		printf("The given no is a strong number");
	}
	else
	{
		printf("The given no is not a strong number");
	}
	getch();
}
