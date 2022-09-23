/*
Write a C++ program to find mean of ten numbers read from users.
*/

#include<iostream>
using namespace std;

int main(){
	int n, sum = 0, Avg, arr[10];
	
	cout<<"Enter Ten Intergers to find Average:";
	for(n=0;n<10;n++)
	    cin>>arr[n];
	
	for(n=0;n<10;n++)
	    sum = sum + arr[n];
		
	Avg = sum/10;
	
	cout<<"Average = " << Avg;
	return 0;
}
