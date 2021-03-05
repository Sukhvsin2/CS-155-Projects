/**
	Name: Sukhvinder Singh
	Description: Take input from a text file in which the votes are written Presidential Election, Vice Presidential Election, 
	Secretary Election, Treasurer Election respectively. Read inputs from a file & print the output on the screen with the winner's name
	& count the votes. Further, print the percentage of the votes particular candidate got.
	Project: Project 3
	Date: 3/4/2021
**/
#include <iostream>
// Library for file stream
#include <fstream>

using namespace std;

// Function declaration
void printWinner(int, int, int);

int main(){
	// Variable Initilization
	int counter = 0, input;
	int e1=0, e2=0, e3=0, e4=0, e5=0, e6=0, e7=0, e8=0;
	
	// Input Stream initilize
	ifstream inFile;
	// Input file open
	inFile.open("votesimple.txt");
	
	do{
		// Counter increment on every iteration
		counter++;
		
		// reading from the file
		inFile >> input;
		
		// if file is at the end
		if(!inFile.eof()){
			
			// when the reminder is 1 
			if(counter % 4 == 1){
				// if the 1st person won the vote
				if(input == 1){
					e1++;
				}else{
				// if the second person won the vote
					e2++;
				}
			}
			
			// when the reminder is 2
			else if(counter % 4 == 2){
				// if the 1st person won the vote
				if(input == 3){
					e3++;
				}else{
				// if the second person won the vote
					e4++;
				}
			}
			
			// when the reminder is 3
			else if(counter % 4 == 3){
				// if the 1st person won the vote
				if(input == 5){
					e5++;
				}else{
				// if the second person won the vote
					e6++;
				}
			}
			else{
				// if the 1st person won the vote
				if(input == 7){
					e7++;
				}else{
				// if the second person won the vote
					e8++;
				}
			}
		}
	}while(!inFile.eof());
	
	// file close
	inFile.close();
	
	// Printing the Output & function calling
	cout<<"Presidential Election Winner: "<<endl;
	printWinner(1, e1, e2);
	cout<<endl<<"Vice Presidential Election Winner: "<<endl;
	printWinner(2, e3, e4);
	cout<<endl<<"Secretary Election Winner: "<<endl;
	printWinner(3, e5, e6);
	cout<<endl<<"Treasurer Election Winner: "<<endl;
	printWinner(4, e7, e8);
	
	return 0;
}

// function defination
void printWinner(int electionNumber, int votes1, int votes2){
	
	if(electionNumber == 1){
		if(votes1 > votes2){
			cout<<"Cedric Diggory - "<<votes1<<" - Winner "<<"(" <<((double)votes1/(votes1+votes2))*100 <<"%)"<<endl;
			cout<<"Harry Potter - "<<votes2<<" - "<<"(" <<((double)votes2/(votes1+votes2))*100 <<"%)"<<endl;
			return;
		}
		
		cout<<"Harry Potter - "<<votes2<<" - Winner "<<"(" <<((double)votes2/(votes1+votes2))*100 <<"%)"<<endl;
		cout<<"Cedric Diggory - "<<votes1<<" - "<<"(" <<((double)votes1/(votes1+votes2))*100 <<"%)"<<endl;
	}else if(electionNumber == 2){
		if(votes1 > votes2){
			cout<<"Vincent Crabbe - "<<votes1<<" - Winner "<<"(" <<((double)votes1/(votes1+votes2))*100 <<"%)"<<endl;
			cout<<"Hermione Granger - "<<votes2<<" - "<<"(" <<((double)votes2/(votes1+votes2))*100 <<"%)"<<endl;
			return;
		}
		
		cout<<"Vincent Crabbe - "<<votes2<<" - Winner "<<"(" <<((double)votes2/(votes1+votes2))*100 <<"%)"<<endl;
		cout<<"Hermione Granger - "<<votes1<<" - "<<"(" <<((double)votes1/(votes1+votes2))*100 <<"%)"<<endl;
	}else if(electionNumber == 3){
		if(votes1 > votes2){
			cout<<"Draco Malfoy - "<<votes1<<" - Winner "<<"(" <<((double)votes1/(votes1+votes2))*100 <<"%)"<<endl;
			cout<<"Neville Longbottom - "<<votes2<<" - "<<"(" <<((double)votes2/(votes1+votes2))*100 <<"%)"<<endl;
			return;
		}
		
		cout<<"Neville Longbottom - "<<votes2<<" - Winner "<<"(" <<((double)votes2/(votes1+votes2))*100 <<"%)"<<endl;
		cout<<"Draco Malfoy - "<<votes1<<" - "<<"(" <<((double)votes1/(votes1+votes2))*100 <<"%)"<<endl;
	}else{
		if(votes1 > votes2){
			cout<<"Draco Malfoy - "<<votes1<<" - Winner "<<"(" <<((double)votes1/(votes1+votes2))*100 <<"%)"<<endl;
			cout<<"Neville Longbottom - "<<votes2<<" - "<<"(" <<((double)votes2/(votes1+votes2))*100 <<"%)"<<endl;
			return;
		}
		
		cout<<"Neville Longbottom - "<<votes2<<" - Winner "<<"(" <<((double)votes2/(votes1+votes2))*100 <<"%)"<<endl;
		cout<<"Draco Malfoy - "<<votes1<<" - "<<"(" <<((double)votes1/(votes1+votes2))*100 <<"%)"<<endl;
	}
	
	
}
