/**
	Name: SUKHVINDER SINGH
	Description: Get the date from user in 8 digit format like 20191216 & 
	print it to 12/16/2019
**/

#include<iostream>

using namespace std;

int main(){
	// Variable Declaration
	int date, len=0;
	string checkDate;
	
	// User input for the 8 digit date
	cout<<"Enter Date in 8 digit: ";
	
//	cin>>date;
	cin>>checkDate;
	
//	while(date != 0){
//		date /= 10;
//		len++;
//	}
//	
//	if(len == 8){
//		len=0;
//		int digit, dd, mm, yr;
//		do{
//			x
//		}while(date != 0)
	cout<<checkDate[4]<<checkDate[5]<<"/"<<checkDate[6]<<checkDate[7]<<"/"<<checkDate[0]<<checkDate[1]<<checkDate[2]<<checkDate[3];
//	cout<<date%10;
		
//	}else{
//		cout<<"Date format is wrong!\nDate should be in 8 digit format."<<endl;
//	}
	
	return 0;
}
