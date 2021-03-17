/**
	Name: Sukhvinder Singh
	Description: Find the circumference of the circle from given diameter by user as an input. 
	The user would provide the number of cicles & diameter according to the number of cicles
	call getCircumference & pass diameter as a parameter. return -1 if the diameter is in -ve
	value, and get print the result on the screen.
	Date: 3/17/21
	Exam: Exam 2
**/
#include<iostream>
using namespace std;

// function declaration
double getCircumference(int);

int main(){
	// variable init
	int circles, d, counter = 0;
	// User input
	cout<<"How many circles? ";
	cin>>circles;
	
	cout<<"Enter the diameter of "<<circles<<" circles in inches as integer."<<endl;
	
	// controlled loop
	do{
		//user diameter input here
		cout<<"Diameter? ";
		cin>>d;
		// function calling
		cout<<"Circumference for a Diameter of "<<d<<" is "<<getCircumference(d)<<endl;
		// counter increment
		counter++;
	}while(counter < circles); // condition check before executing again
	
	return 0;
}

// function defination
double getCircumference(int d){
	// checking if it's not a -ve value
	if(d > -1){
		return 2 * 3.14 * (d/2);
	}
	// otherwise return -1 for -ver values	
	return -1;
}
