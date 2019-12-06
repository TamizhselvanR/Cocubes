#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	int i =0,j =1,n = 5,k=0,temp;
	while(k < n)
	{
		cout<<i<<"\n";
		temp = j;
		j = j + i;
		i = temp;
		k++;
	}
	return 0;
}
