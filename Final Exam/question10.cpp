#include<iostream>

using namespace std;

/**
	Name: Min Max
	Incoming Data: An array with size of array and 2 other integers bfor min & max value.
	Ooutgoing Data: Nan
**/
void minMax(int arr[], int num, int &min, int &max){
	min = arr[0], max = min;
	for(int i=0;i<num;i++){
		if(arr[i] > max){
			max = arr[i];
		}
		if(arr[i] < min){
			min = arr[i];
		}
	}
}

int main(){
	int arr[] = {5, 4, 3, 2, 1};
	int min,max;
//	minMax(arr, 5, min, max);
//	cout<<min<<endl<<max;
	cout<<endl<<check(arr, 5)<<endl;
	return 0;
}
