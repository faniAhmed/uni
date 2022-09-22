/*
Display the following checkerboard pattern with eight output statements, then display
the same pattern using as few statements as possible.

* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *

*/

#include<iostream>
using namespace std;

void out_statements(){
	cout<<"* * * * * * * *\n";
	cout<<" * * * * * * * *\n";
	cout<<"* * * * * * * *\n";
	cout<<" * * * * * * * *\n";
	cout<<"* * * * * * * *\n";
	cout<<" * * * * * * * *\n";
	cout<<"* * * * * * * *\n";
	cout<<" * * * * * * * *\n";
}

void min_statements(){
	int i;
	for(i = 1; i<=8; i++)
		if(i%2 == 0)
			cout<<" * * * * * * * *\n";
		else
			cout<<"* * * * * * * *\n";
}


int main(){
	out_statements();
	cout<<endl;
	min_statements();
	return 0;
	
}


