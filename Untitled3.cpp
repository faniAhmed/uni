//Write a program and ask the user to enter two float numbers. Your program should
//display their division.

#include<iostream>
using namespace std;

int main(){
	float x, y , res;
	
	cout<<"Enter Two Float Numbers to Perform Division:";
	cin>>x>>y;
	res = x/y;
	
	cout<<"Result = " << res;
	return 0;
}
