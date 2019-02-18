#include<stdio.h>
#include<conio.h>
void main()
{
	int num = 229,rem;
	printf("The digits are \n");
	while(num)
	{
		rem = num%10;
		printf("%d\n",rem);
		num /= 10;
	}
}
