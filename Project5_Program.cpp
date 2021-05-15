#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//FUNCTION DECLARATIONS HERE
//PROPER FUNCTION COMMENT HEADERS REQUIRED

/**
	Name: Initialize Array
	Incoming: An array with it's size in second
	parameter.
	Outgoing: None, because all array's are passed
	by refrence.
**/
void initializeArray(int[], int);

/**
	Name: Check Num
	Incoming: An array with size & desired number to search
	Outgoing: 1 or 0 according to seach, if it's in the array
	it'd return 0, if not return 1.
**/
int checkNum(int[], int, int);

/**
	Name: Insert Rand
	Incoming: An array with size
	Outgoing: None
**/
void insertRand(int[], int);

/**
	Name: Print Board
	Incoming: 2 arrays with a size parameter
	Outgoing: None
**/
void printBoard(int[], int[], int);

/**
	Name: Get Guess
	Incoming: 2 arrays with a size parameter
	and total found variable.
	Outgoing: None
**/
void getGuess(int[], int[], int, int&);

void printArr(int arr[], int s){
	for(int i=0;i<s;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
    srand(time(0));

    int ttlFound = 0;

    int row1[10];
    int row2[10];

    initializeArray(row1, 10);
    initializeArray(row2, 10);

    insertRand(row1, 10);
    insertRand(row2, 10);

    printBoard(row1, row2, 10);
	

    while(ttlFound < 10){
        getGuess(row1, row2, 10, ttlFound);
        printBoard(row1, row2, 10);
    }

    cout<<"Game Over!"<<endl;
}

//FUNCTION IMPLEMENTATIONS HERE

/**
	Name: Initialize Array
	Incoming: An array with it's size in second
	parameter.
	Outgoing: None, because all array's are passed
	by refrence.
**/
void initializeArray(int arr[], int s){
	do{
		arr[s] = -1;
	}while(s--);
}

/**
	Name: Insert Rand
	Incoming: An array with size
	Outgoing: None
**/
void insertRand(int arr[], int s){
	int counter = 0;
	while(counter < s){
		int rNum = rand() % 10 + 1;
		if(checkNum(arr, rNum, s)){
			arr[counter] = rNum;
			counter++;
		}
	}
}

/**
	Name: Insert Rand
	Incoming: An array with size
	Outgoing: None
**/
int checkNum(int arr[], int num, int s){
	while(s--){
		if(arr[s] == num) return 0;
	}
	return 1;
}


/**
	Name: Print Board
	Incoming: 2 arrays with a size parameter
	Outgoing: None
**/
void printBoard(int arr1[], int arr2[], int s){
	int counter = 0;
	while(counter < s*2){
		if(counter < s){
			if(arr1[counter] == 99){
				cout<<"X"<<" ";
			}else{
				cout<<counter+1<<" ";
			}	
		}else{
			if(arr2[counter-11] == 99){
				cout<<"X"<<" ";
			}else{
				cout<<counter+1<<" ";
			}
		}
		
		if(counter == s-1) cout<<endl;
		counter++;
	}
	cout<<endl;
}


/**
	Name: Get Guess
	Incoming: 2 arrays with a size parameter
	and total found variable.
	Outgoing: None
**/
void getGuess(int arr1[], int arr2[], int s, int &ttlF){
	int inp1, inp2;
	cout<<"What number card would you like to check from the first row? "<<endl;
	cin>>inp1;
	cout<<inp1<<" is a(n) "<<arr1[inp1-1]<<endl;
	
	cout<<"What number card would you like to check from the second row? "<<endl;
	cin>>inp2;
	cout<<inp2<<" is a(n) "<<arr2[inp2-11]<<endl;
	
	
	if(arr1[inp1-1] == arr2[inp2-11]){
		cout<<"Match!"<<endl;
		arr1[inp1-1] = 99;
		arr2[inp2-11] = 99;
		ttlF++;
		return;
	}
	
	cout<<"No match!"<<endl;
}
