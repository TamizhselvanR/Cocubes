#include<stdio.h>
#include<conio.h>
void main()
{
	int a=3,b=4;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("the swapped numbers are\n");
	printf("a = %d\t b = %d\t",a,b);
	getch();
}
