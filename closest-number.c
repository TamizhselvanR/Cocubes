/*Find the number closest to n and divisible by m
Given two integers n and m. The problem is to find the number closest to n and divisible by m. If there are more than one such number, then output the one having maximum absolute value. If n is completely divisible by m, then output n only. Time complexity of O(1) is required.*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n=53,m=10,q,n1,n2;
	q = n/m;
	printf("%d\n",q);
	n1 = m*q;
	printf("%d\n",n1);
	if((n * m) > 0)
    { 
	    n2 = m * (q + 1);
		printf("%d\n",n2);
	}
	else
    {
	    n2 = m * (q - 1);
		printf("%d\n",n2);
	}
	if (abs(n-n1) < abs(n-n2))
        printf("%d\n",n1);
    else
		printf("%d\n",n2);
}
