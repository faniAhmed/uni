/*
Take three int values named x, y, and z from the user and show their sum on a console.
*/

#include<iostream>
using namespace std;

int main(){
	int x, y, z, Sum;
	
	cout<<"Enter Three Intergers to find Sum:";
	cin>>x>>y>>z;
	Sum = x+y+z;
	
	cout<<"Sum = " << Sum;
	return 0;
}
