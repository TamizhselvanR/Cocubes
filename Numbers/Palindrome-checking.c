#include<stdio.h>
#include<conio.h>
void main()
{
	int num = 12,temp,rem,rev_number = 0;
	printf("The given number is \n");
	temp = num;
	while(num)
	{
		rem = num%10;
		rev_number = rev_number*10 + rem;
		num = num/10;
		printf("\n%d\n",rev_number);
	}
	if(temp != rev_number)
	{
		printf("Not a palindrome");
	}
	else
	{
		printf("a palindrome");
	}
	getch();
}
