#include<iostream>

using namespace std;

int periArray(int arr[][5], int rows){
	int peri = 0;
	for(int i=0; i<rows; i++){
		for(int j=0; j<5; j++){
			if(i == 0 || i == rows){
				peri += arr[rows][j];
			}else{
				peri += arr[rows][4] + arr[rows][0];
				continue;
			}
		}
	}
	if(peri % 2 == 0) return 1;
	return 0;
}

int main(){
	int arr[5][5];
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			cin>>arr[i][j];
		}
	}
	cout<<periArray(arr, 5);
	return 0;
}
