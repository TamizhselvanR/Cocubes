#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,big;
	printf("Enter the three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	big = a>b?(a>c?a:c):b>c?b:c;
	printf("The biggest of three using conditional operator\t");
	printf("%d\n",big);
	getch();
}
