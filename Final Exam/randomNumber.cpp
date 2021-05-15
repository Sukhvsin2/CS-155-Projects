#include<iostream>
// for the rand() function and srand function
#include<cstdlib>
// fot the time() function
#include<ctime>

using namespace std;

// function deleclaration

/**
	Name: Numb Gen
	Incoming Data: An array with the size of that array
	Outgoing Data: Nan
**/
void numbGen(int[], int);
/**
	Name: Dup Check
	Incoming Data: An array with the size of that array and key to find in the array
	Outgoing Data: 1 or 0 according to situation
**/
int dupCheck(int[], int, int);
/**
	Name: Sum Avg
	Incoming Data: An array with the size of that array
	Outgoing Data: Sum of all elements
**/
int sumAvg(int[], int);

int main(){
	// seed for random numbers
	srand(time(0));
	// array declaration
	int arr[20];
	
	// number generating
	numbGen(arr, 20);
	
	// printing the unique numbers
	cout<<"Sum of the unique values: "<<sumAvg(arr, 20);
	return 0;
}

/**
	Name: Dup Check
	Incoming Data: An array with the size of that array and key to find in the array
	Outgoing Data: 1 or 0 according to situation
**/
int dupCheck(int arr[], int key, int num){
	// matching the key
	for(int i=0;i<num;i++){
		if(arr[i] == key) return 0;
	}
	return 1;
}

/**
	Name: Numb Gen
	Incoming Data: An array with the size of that array
	Outgoing Data: Nan
**/
void numbGen(int arr[], int num){
	int i=0;
	while(i < num){
		// generating number
		int temp = rand() % (37 - 17 + 1) + 17;
		// checking duplicacy
		int select = dupCheck(arr, temp, num);
		if(select){
			 arr[i] = temp;
			 i++;
		}
	}
}

/**
	Name: Sum Avg
	Incoming Data: An array with the size of that array
	Outgoing Data: Sum of all elements
**/
int sumAvg(int arr[], int num){
	int sum = 0;
	for(int i=0;i<num;i++){
		sum += arr[i];
	}
	return sum;
}
