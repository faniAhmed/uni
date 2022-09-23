/*
Write a program to calculate the diameter of a circle having a user-defined radius, and pi = 3.14.
*/

#include<iostream>
using namespace std;

int main(){
	float diameter, r;
	cout<<"Enter Radius Of Circle to Calculate Area:";
	cin>>r;
	diameter = 2 * r;
	cout<<"Diameter = " << diameter;
	return 0;
}
