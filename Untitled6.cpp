/*
Write a C++ program to find average of three numbers read from users.
*/

#include<iostream>
using namespace std;

int main(){
	int x, y, z, Avg;
	
	cout<<"Enter Three Intergers to find Average:";
	cin>>x>>y>>z;
	Avg = (x+y+z)/3;
	
	cout<<"Average = " << Avg;
	return 0;
}
