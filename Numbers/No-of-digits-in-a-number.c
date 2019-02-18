#include<stdio.h>
#include<conio.h>
void main()
{
	int num = 22945567,count = 0;
	printf("The no of digits are \n");
	while(num)
	{
		count++;
		num /= 10;
	}
	printf("%d\n",count);
}
