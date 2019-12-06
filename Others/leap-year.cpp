#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	int year = 2000;
	if((year % 4 == 0 and year % 100 != 0) or year % 400 == 0)
	    cout<<"The year is a leap year!";
	else
	    cout<<"The year isn't a leap year!";
	return 0;
}
