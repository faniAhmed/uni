/*
Write a C++ program to perform all arithmetic operation on two integers taken from user.
*/

#include<iostream>
using namespace std;

int main(){
	int x, y, opt, Sum, Div, Mul, Sub;
	while(true){
		cout<<" Enter 1 to perform  Addition:\n Enter 2 to perform Subtraction\n Enter 3 to perform Multiplication\n Enter 4 to perform Division\n Enter 5 to Exit\n";
		cin>>opt;
		if (opt == 5)
			break;
		cout<<"Enter Two Integers:";
		cin>>x>>y;
		switch(opt){
			case 1: cout<<"Sum = "<<x+y;
					break;
			case 2: cout<<"Sub = "<<x-y;
					break;
			case 3: cout<<"Mul = "<<x*y;
					break;
			case 4: cout<<"Div = "<<x/y;
					break;
			default:
				cout<<"Invalid Option";
			}
		cout<<endl;
		}
	return 0;
}
