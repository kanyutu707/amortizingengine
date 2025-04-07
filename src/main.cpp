#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#include "divisor.hpp"
#include "multiplier.hpp"


int main()
{
    const int monthsInYear = 12;
    const int percentDenominator = 100;
    double principal =0.0;
    cout << "Please enter the principal amount: ";
    cin >> principal;
    double humanInterest = 0.0;
    cout << "Please enter the interest rate: ";
    cin >> humanInterest;
    double interest = divisor(humanInterest , percentDenominator);
    int yearsOfLoan = 0;
    cout << "Please enter the years of loan: ";
    cin >> yearsOfLoan;
    double monthInterest=divisor(interest,monthsInYear);
    long monthsOfLoan = multiplier(yearsOfLoan , monthsInYear);
    
    double payment = 0.0;

    payment = principal *
        (monthInterest /
            (1 - (pow((double)1 + monthInterest, 
                (double) - monthsOfLoan))));
    cout << "Payment: " <<setiosflags(ios::fixed)<< 
        setprecision(2)<<payment << endl;

    double currInterestPayment = 0.0;
    double currPrincipalPayment = 0.0;
    double currBalance = 0.0;

    currBalance = principal;

    long currLoanMonth = 1;

    while (currLoanMonth <= monthsOfLoan) {
        currInterestPayment = currBalance * monthInterest;
        currPrincipalPayment = payment - currInterestPayment;
        currBalance = currBalance - currPrincipalPayment;

        cout << "CM:    " << currLoanMonth <<
            "   CI: " << currInterestPayment <<
            "   CP: " << currPrincipalPayment <<
            "   Bal:    " << currBalance <<
            endl;
       currLoanMonth++;

    }
    cout << "Loan payments complete" << endl;
    return 0;
}

