#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	int i,j,k,star=1,n = 5;
	for(i = 0 ;i < n;i++)
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
		cout<<"\n";
	}
	return 0;
}
