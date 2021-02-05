/**
    Name: Sukhvinder Singh
    Description: Get MovieName, total sold adult tickets & total children tickets as input and display
    in a specific pattern upto 2 decimal points.
    Project: Project 1
    Date: Feb. 4 2021
**/

#include <iostream>
// Header file for setprecision & fixed
#include <iomanip>

using namespace std;

// constant variable for string input
const int stringLen = 100;

int main()
{
    // Varibale Insitialization
    int adultTicketsSold, childTicketsSold;
    char movieName[stringLen];
    // Constants variables for ticket
    const double adultPrice = 7.50, childPrice = 4.75;
    // Final output varibles
    double grossBoxRevenue, distributorAmount, netProfit;

    // User Input for movie name
    cout << "What is the name of the movie? ";
    cin.getline(movieName, stringLen);

    // User Input for adult ticket
    cout << "How many adult tickets sold? ";
    cin >> adultTicketsSold;

    // User Input for chidlren ticket
    cout << "How many children tickets sold? ";
    cin >> childTicketsSold;

    // calculations
    // GrossBoxRevenue Formula Applied
    grossBoxRevenue = (adultTicketsSold * adultPrice) + (childTicketsSold * childPrice);
    // Distributor Amount Formula Applied
    distributorAmount = grossBoxRevenue * 0.8;
    // Net Profit Amount Formula Applied
    netProfit = grossBoxRevenue - distributorAmount;

    // Displaying output as per the Project
    cout << endl<< "Movie Name:" << setw(18) << " " << fixed << setprecision(2) << movieName << endl;
    cout << "Gross Box Office Revenue:" << setw(6) << fixed << setprecision(2) << "$ " << grossBoxRevenue << endl;
    cout << "Distributor Amount:" << setw(12) << "$ " << fixed << setprecision(2) << distributorAmount << endl;
    cout << "Net Profit:" << setw(20) << "$ " << fixed << setprecision(2) << netProfit << endl;

    // Program End
    return 0;
}
