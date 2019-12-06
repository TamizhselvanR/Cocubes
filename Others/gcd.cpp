#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	int a = 4,b = 2,c,gcd;
	c = a<b?a:b;
	while(c != 1)
	{
		if(a % c == 0 && b % c == 0)
		{
			gcd = c;
			break;
		}
		c--;
	}
	cout<<gcd;
}
