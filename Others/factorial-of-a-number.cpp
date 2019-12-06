#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	int a = 5,fact;
	while(a != 0)
	{
		fact = fact * a;
		a--;
	}
	cout<<fact;
}
