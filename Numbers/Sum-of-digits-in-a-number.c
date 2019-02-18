#include<stdio.h>
#include<conio.h>
void main()
{
	int num = 229,rem,sum = 0;
	printf("The sum of digits is \n");
	while(num)
	{
		rem = num%10;
		sum = sum + rem;
		num /= 10;
	}
	printf("%d\n",sum);
}
