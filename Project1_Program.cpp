#include <iostream>
#include <iomanip>

using namespace std;

const int stringLen = 100;

int main()
{
    int adultTicketsSold, childTicketsSold;
    char movieName[stringLen];
    const double adultPrice = 7.50, childPrice = 4.75;
    
    double grossBoxRevenue, distributorAmount, netProfit;
    
    cout<<"What is the name of the movie? ";
    cin.getline(movieName, stringLen);
    
    cout<<"How many adult tickets sold? ";
    cin>>adultTicketsSold;
    
    cout<<"How many children tickets sold? ";
    cin>>childTicketsSold;
    
    // calculations
    grossBoxRevenue = (adultTicketsSold * adultPrice) + (childTicketsSold * childPrice);
    distributorAmount = grossBoxRevenue * 0.8;
    netProfit = grossBoxRevenue - distributorAmount;
    
    cout<<endl<<"Movie Name:"<<"                  "<<fixed<<setprecision(2)<<movieName<<endl;
    cout<<"Gross Box Office Revenue:"<<setw(6)<<fixed<<setprecision(2)<<"$ "<<grossBoxRevenue<<endl;
    cout<<"Distributor Amount:"<<setw(12)<<"$ "<<fixed<<setprecision(2)<<distributorAmount<<endl;
    cout<<"Net Profit:"<<setw(20)<<"$ "<<fixed<<setprecision(2)<<netProfit<<endl;
    
    return 0;
}
