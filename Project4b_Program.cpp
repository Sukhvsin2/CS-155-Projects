/**
	Name: Sukhvinder Singh
	Project: Project 4
	Description: Project is on how to use diffrent type of function in a cpp program.
	In this program we've used every kind of function - no return, return, with parameters, without parameters.
	In main - we have a central control loop till 4 & calling function according to the case.
	Date: 3/15/2021
**/

#include <iostream>
using namespace std;

// new function
void outputFinalNeeded(double);

//FUNCTION DECLARATIONS - ***DO NOT MODIFY***
/*name: printPrompt
  INCOMING:  An integer of possible values 1 through 4 indicating a specific graded activity  
  OUTGOING:  None
*/   
void printPrompt(int);

/*name: average
  INCOMING: None
  OUTGOING: The double average of the integer grades as entered by the user
*/
double average();

/*name: weightedAverage
  INCOMING: Four double values representing the averages for the four graded activities
  OUTGOING: The double value representing the weighted average for the course so far (a.k.a. the current grade)
*/
double weightedAverage(double, double, double, double);

/*name: outputAverages
  INCOMING: A double value representing the current grade and four double values for four graded activity averages
  OUTGOING: None
*/
void outputAverages(double, double, double, double, double);

//MAIN FUNCTION - ***DO NOT MODIFY***
int main(){
   double quizAvg, assignAvg, examAvg, projAvg, currentGrade;      
   int count = 1;
   while (count<=4){
      printPrompt(count);
      switch(count){
         case 1:
         //1 - getting the quiz grades 
            quizAvg = average();
            break;
         case 2:
         //2 - getting the assignment grades
            assignAvg = average();
            break;
         case 3:
         //3 - getting exam grades
            examAvg = average();
            break;
         case 4:
         //4 - getting project grades
            projAvg = average();
            break;
      }
      count++;
   }
   
   //get the current grade, based on the different averages and their weights.
   currentGrade = weightedAverage(quizAvg, assignAvg, examAvg, projAvg);
	
   
   outputAverages(currentGrade, quizAvg, assignAvg, examAvg, projAvg);
   
   outputFinalNeeded(currentGrade);
}
//END MAIN FUNCTION

//**YOUR FUNCTION DEFINITIONS START HERE - Put your code below this line**//
//**--YOUR WORK HERE--**
//**PLACE YOUR FUNCTION DEFINITIONS (a.k.a. IMPLEMENTATIONS) BELOW**


void outputFinalNeeded(double cWeightAvg){
	if(cWeightAvg > 100){
		cout<<"It's impossible to earth that grade!"<<endl;
	}else if(cWeightAvg <= 0){
		cout<<"You already Earned that grade."<<endl;
	}	
}


/**
	Name: printPrompt
	Input: A number through the parameters
	Output: None, but printing particular statements according to the case
**/
void printPrompt(int num){
	// accroding to num the statements will be print
	switch(num){
		case 1:
			cout<<"Enter your quiz grades (-1 to end input): "<<endl;
			break;
		case 2:
			cout<<"Enter your assignment grades (-1 to end input): "<<endl;
			break;
		case 3:
			cout<<"Enter your exam grades (-1 to end input): "<<endl;
			break;
		case 4:
			cout<<"Enter your project grades (-1 to end input): "<<endl;
			break;
	}
}

/**
	Name: average
	Input: None, but taking data from user through the input stream & terminate after getting -1
	in the input.
	Output: Returning the average of the user input data in double
**/
double average(){
	int temp, counter = 0;
	double sum = 0;
	// Sentinal loop till the user not type -1 as input.
	do{
		cin>>temp;
		if (temp != -1) sum += temp;
		counter++;
	}while(temp != -1);
	
	// returning the average
	return (sum / (counter-1));
}

/**
	Name: weightedAverage
	Input: 4 parameters of double values
	Output: returns double value after getting the average of all averages & getting the grade
**/
double weightedAverage(double quizAvg, double assignAvg, double examAvg, double projAvg){
	// adding for average
	double temp = (quizAvg * 0.15) + (assignAvg * 0.15) + (examAvg * 0.25) + (projAvg * 0.25);
	// calcluating the grade out of 100
	temp /= 80;
	temp *= 100;
	// returning the grade
	return temp;
}

/**
	Name: outputAverages
	Input: 5 parameters with the double values
	Output: None, just printing on the display the statements with the values from paramerters
**/
void outputAverages(double currentGrade, double quizAvg, double assignAvg, double examAvg, double projAvg){
	// printing the out by parameters provided
	cout<<endl<<"Your quiz average: "<<quizAvg<<endl;
	cout<<"Your assignment average: "<<assignAvg<<endl;
	cout<<"Your exam average: "<<examAvg<<endl;
	cout<<"Your project average: "<<projAvg<<endl;
	cout<<"Your current grade in this course is: "<<currentGrade<<endl;
}
