#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	int a = 4,b = 5,c,lcm;
	c = a>b?a:b;
	while(1)
	{
		if(c % a == 0 && c % b == 0)
		{
			lcm = c;
			break;
		}
		c++;
	}
	cout<<lcm;
}
