/*
Write a program that inputs three integers from the key- board and prints the sum,
average and product of these numbers. The screen dialog should appear as follows:
Input three different integers: 13 27 14
Sum is 54
Average is 18
Product is 4914
*/

#include<iostream>
using namespace std;

int main(){
	int x, y, z, Sum, prod, Avg;
	
	cout<<"Enter Three Intergers to find Sum, Average and Product:";
	cin>>x>>y>>z;
	
	Sum = x+y+z;
	prod =x*y*z;
	Avg = (Sum)/3;

	cout<<"Sum = " <<Sum <<endl;
	cout<<"Product = " <<prod <<endl;	
	cout<<"Average = " <<Avg <<endl;

	return 0;
}
