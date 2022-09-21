//Write a program to calculate the area of a circle having a user-defined radius, and
//pi = 3.14. (Area = ? R2)

#include<iostream>
using namespace std;

int main(){
	float Area, pi = 3.14, r;
	
	cout<<"Enter Radius Of Circle to Calculate Area:";
	cin>>r;
	Area = pi * r * r;
	cout<<"Area = " << Area;
	return 0;
}
