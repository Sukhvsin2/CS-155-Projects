#include<iostream>
using namespace std;

int a = 10;
void check(){
	cout<<"in "<<a<<endl;
	int a = 11;
	cout<<"ina "<<a<<endl;
	a = 22;
}
int main(){
	cout<<a<<endl;
	check();
	cout<<a<<endl;
	
	
	return 0;
}


