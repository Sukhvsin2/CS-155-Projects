/**
    Name: Sukhvinder Singh
    Description: Have to convert military date(YYYYMMDD) to american standard date(MM/DD/YYY).
    Example: 20191216 to 12/16/2019.
    Additional Features: Omit the leading zero.
    Example: 20200111 to 1/11/2020
    Project: Project 2
    Date: 2/21/2021
**/
#include <iostream>
// String header file because i'm using stoi - String to Interger & size() for the size of date.
#include <string>

using namespace std;

int main()
{
    // Initilizing Variables
    int date, dd, mm;
    string strDate;
    
    // Taking Input from user.
    cout<<"Enter the military date: ";
    cin>>strDate;
    // Converting string to interger.
    date = stoi(strDate);
    
    if(strDate.size() == 8){
        // Fetching 2 numbers from the date
        dd = date % 100;
        
        // Day Validation
        if(dd > 31 && dd < 1){
            cout<<"Error: Day is not in range of (1-31)!";
            return 0;
        }
        
        // Removing the fetched numbers from the date
        date /= 100;
        
        // Fetching 2 numbers from the date
        mm = date % 100;
        
        // Month Validation
        if(mm > 12 && mm < 1){
            cout<<"Error: Month is not valid, range is(1-12).";
            return 0;
        }
        
        // Removing the fetched numbers from the date & now date variable is only left with the year
        // so we can use date variable as a year.
        date /= 100;
        
        // Displaying date after converting into american standard(MM/DD/YYYY).
        cout<<"Date: "<<mm<<"/"<<dd<<"/"<<date<<endl;
    }else{
        // If the date is more or less than 8-digits.
        cout<<"Error: Date format error.\nIt should be proper 8-digit."<<endl;
    }

    return 0;
}

