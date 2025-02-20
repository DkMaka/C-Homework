#include <iostream>

// Library to Round off to two decimal places
#include <iomanip>

// Allows to use standard library names without the std:: prefix (e.g cout, cin etc)
using namespace std;

int main() {
    // Declaring the variables to store values with/ no commas
    double netBalance, payment, interestRate, interest;

    //// Declaring the variables to store values in whole number
    int d1, d2;

    // Ask the user for the net balance
    cout << "What is your net balance on the credit card? ";

    // Allows user to insert the input for netbalance
    cin >> netBalance;

    // Ask the user for the payment they made and store it
    cout << "Then how much did you pay? ";

    // Allows user to insert the input for payment
    cin >> payment;

    // Ask user for the total number of days in the billing cycle
    cout << "Okay, then the number of days in the billing cycle? ";

    // Allows user to insert the input for days in the billing cycle
    cin >> d1;

    // Ask the user how many days before the billing cycle the payment was made
    cout << "And how many days before the billing cycle did you make the payment? ";

    // Allows user to insert the input for days before the billing cycle
    cin >> d2;

    // Ask the user for the monthly interest rate (in commas)
    cout << "Great, now what's the monthly interest rate? (e.g, enter 0.0152 for 1.52%): ";

    //Allows user to insert the input for interest rate
    cin >> interestRate;

    // Calculate the average daily balance
    double averageDailyBalance = (netBalance * d1 - payment * d2) / d1;

    // Calculate the interest
    interest = averageDailyBalance * interestRate;

    // Shows the output into two decimal places
    cout << fixed << setprecision(2);

    // Shows the user the calculated interest in Rands
    cout << "Well, The interest on the unpaid balance is : R" << interest << endl;

    // End the program in the main function
    return 0;
}
