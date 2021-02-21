#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	int v0, time;
	const double a = 9.8;
	
	cout<<"Enter Velocity & time: ";
	cin>>v0>>time;
	
	if(time <= 0) {
		cout<<"Invalid Time";
		return 0;
	}
	if(v0 <= 0){
		cout<<"Invalid initial velocity";
		return 0;
	}
	
	int s = (v0 * time);
	int temp = time^2;
	s += (1/2 * (a*temp));
	
	cout<<"Speed: "<<setw(8)<<setprecision(4)<<fixed<<s;
	
	return 0;
}
