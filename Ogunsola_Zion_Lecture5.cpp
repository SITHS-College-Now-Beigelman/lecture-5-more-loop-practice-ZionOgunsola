//Zion Ogunsola
//Lecture 5
//10/7/2024

#include <iostream>

#include <string>

#include <iomanip>

using namespace std;

int main ()
{
    
    double moneyStarting;
    int transactions;
    
    
    
    cout << "How much money do you have in your bank account?" << endl;
    cin >> moneyStarting;

    cout << "How many bank transactions have you done today?" << endl;
    cin >> transactions;

    for (int i=0;i <= transactions;i++)
    {
        double valueTransaction;
        int typeOfTransaction;
        
        double moneyAfter;
        
        cout << "Type of transaction (1 for Debit and 0 for Credit)" << endl;
        cin >> typeOfTransaction;
        
        cout << "How much was the transaction?" << endl;
        cin >> valueTransaction;

        if(typeOfTransaction == 0) 
        {
            moneyAfter = moneyStarting + valueTransaction;
            moneyAfter= moneyStarting;
    
        }
        else
        {
            moneyAfter = moneyStarting - valueTransaction;
            moneyAfter= moneyStarting;

        }

        cout << "Total amount in the account is: " << moneyAfter << endl;

    }

    return 0;
}