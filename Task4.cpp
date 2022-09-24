/*
Write a C++ program to find mean of ten numbers read from users.
*/

#include<iostream>
using namespace std;
int main(){
	int n, num, sum = 0, Avg;
	cout<<"Enter Ten Integers to find Average:";	
	for(n=0;n<10;n++){
	    cin>>num;
	    sum = sum + num; }
	Avg = sum/10;	
	cout<<"Average = " << Avg;
	return 0;  }
