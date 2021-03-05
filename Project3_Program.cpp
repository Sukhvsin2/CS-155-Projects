#include <iostream>
#include <fstream>

using namespace std;

void printWinner(int, int, int);

int main(){
	int counter = 0, input;
	int e1=0, e2=0, e3=0, e4=0, e5=0, e6=0, e7=0, e8=0;
	
	ifstream inFile;
	inFile.open("votesimple.txt");
	
	do{
		counter++;
		inFile >> input;
		if(!inFile.eof()){
			if(counter % 4 == 1){
				if(input == 1){
					e1++;
				}else{
					e2++;
				}
			}else if(counter % 4 == 2){
				if(input == 3){
					e3++;
				}else{
					e4++;
				}
			}else if(counter % 4 == 3){
				if(input == 5){
					e5++;
				}else{
					e6++;
				}
			}else{
				if(input == 7){
					e7++;
				}else{
					e8++;
				}
			}
		}
	}while(!inFile.eof());
	
	
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
