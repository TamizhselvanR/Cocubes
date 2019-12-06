#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	int i,j,k,star=1,n = 3,sec_star = (n-1)*2-1;
	for(i = 0 ;i < n*2-1;i++)
	{
		if(i < n)
		{
			for(j = 0;j < n-i-1;j++)
			{
				cout<<" ";
			}
			for(k = 0;k < star;k++)
			{
				cout<<"*";
			}
			star += 2;		
		}
		else
		{
			for(j = 0;j < i-n+1;j++)
			{
				cout<<" ";
			}
			for(k = 0;k < sec_star;k++)
			{
				cout<<"*";
			}	
			sec_star -= 2;
		}
		cout<<"\n";
	}
	return 0;
}
