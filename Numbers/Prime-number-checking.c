#include<stdio.h>
#include<conio.h>
void main()
{
	int num = 57,flag=0,i;
	for(i=2;i<num;i++)
	{
		if((num%i)==0)
		{
			flag = 1;
		}
		printf("%d\n",flag);
	}
	if(flag == 1)
	{
		printf("not a prime number");
	}
	else
	{
		printf("prime number");
	}
	getch();
}
