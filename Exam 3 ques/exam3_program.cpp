#include <iostream>
using namespace std;

/*
	name: initializeArray
	INCOMING: an integer array and an int representing the size of the array
	OUTGOING: the array with all values initialized to 0
*/
void initializeArray(int[], int);

/*
	name: loadArray
	INCOMING: an integer array and an int representing the size of the array
	OUTGOING: the array with a grade for each student (received from input form the user)
*/
void loadArray(int[], int);

/*
	name: calculateGradeTotal
	INCOMING: an integer array containing the grades and it's size AND an integer array for storing 
			grade totals (num A's, num B's , etc.)
	OUTGOING: the second array containing the total number of A's, B's, C's, D's and F's in that order
*/
void calculateGradeTotals(int[], int, int[]);

/**
	Name: printStars
	Incoming: An integer which determines how many stars need to print on the screen by loop
	Outgoing: None
**/
void printStars(int);

/*
	name: displayResults
	INCOMING: an integer array containing the total number of A's, B's, C's, D's and F's
	OUTGOING: none
	comment: this function is responsible for printing out the output (number of each grade type and bar chart) as
			described in the problem statement
*/
void displayResults(int[], int);

int main(){
	int numStud = 10;
	int grades[10]; //array for storing each individual grade
	int letterTotals[5]; //array for storing the sum total of each letter grade (A,B,C,D,F)
	
	initializeArray(grades, 10);
	initializeArray(letterTotals, 5);
	
	loadArray(grades, 10);
	calculateGradeTotals(grades, 10, letterTotals);
	displayResults(letterTotals, 5);	
}

void initializeArray(int arr[], int s){
	
	// initalize whole array with 0
	while(s--){
		// assigning 0 at every index
		arr[s] = 0;
	}
}

void loadArray(int arr[], int s){
	// counter intialized
	int counter = 0;
	
	// input from use to enter numbers in the array
	cout<<"Please enter each grade, one at a time: "<<endl;
	while(counter < s){
		
		// user input
		cin>>arr[counter];
		counter++;
	}
}

void calculateGradeTotals(int arr[], int size1, int ttls[]){
	for(int i=0; i<size1; i++){
		if(arr[i]>=90){
			ttls[0]++;
		}
		else if(arr[i]>=80){
			ttls[1]++;
		}
		else if(arr[i]>=70){
			ttls[2]++;
		}
		else if(arr[i]>=60){
			ttls[3]++;
		}
		else{
			ttls[4]++;
		}
	}
}

void printStars(int n){
	
	// loop to print * 
	while(n--){
		cout<<"*";
	}
	cout<<endl;
}

void displayResults(int arr[], int s){
	int counter = 0;
	// Pre-defined array to make code shorter
	char grades[] = {'A', 'B', 'C', 'D', 'F'};
	
	// extra space
	cout<<endl;
	
	// looping through both arrays
	while(s > counter){
	
		// printing Grades from grades array with counter & numbers from arr array
		cout<<"Number of "<<grades[counter]<<"s: "<<arr[counter]<<endl;
	
		// counter increment
		counter++;
	}
	
	// counter reset for re-use
	counter = 0;
	
	// loop for printing * after every grade
	while(s > counter){
		
		// printing GRADES with the help of grades array
		cout<<grades[counter]<<": ";
		
		// print stars from printStart function by passing numbers of start in the argument/parameters
		printStars(arr[counter]);
		
		// counter increment
		counter++;
	}
}
