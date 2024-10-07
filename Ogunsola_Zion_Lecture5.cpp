//Zion Ogunsola
//Lecture 5
//10/7/2024

#include <iostream> //Includes iostream

 
#include <iomanip> //Includes iomanip

using namespace std;

int main ()
{
    
    double moneyStarting; //Decalares variabe moneyStarting
 
    int transactions; //Decalres variable transactions
    
    
    
    cout << "How much money do you have in your bank account?" << endl; //Outputs statement
    cin >> moneyStarting; //Allows user to input

    cout << "How many bank transactions did you do that day?" << endl;//Outputs statement
    cin >> transactions;//Allows user to input

    for (int i=0;i <= transactions;i++) //Loops statement wile i is less than or equal to the number of transactions
    {
        double valueTransaction; //Decalres variable valueTransaction
        int typeOfTransaction; //Decalares variable typeOfTransaction
        double moneyAfter; //Decalres variable moneyAfter

        
         
        cout << "Type of transaction (1 for Debit and 0 for Credit)" << endl; //Outputs statement
        cin >> typeOfTransaction; //Allows user to input
        
        cout << "How much was the transaction?" << endl; //Outputs statement
        cin >> valueTransaction; //Allows user to input

        if(typeOfTransaction == 0)  //Sets condition for if statement
        {
            moneyAfter = moneyStarting + valueTransaction; //Calculates variable moneyAfter
     
        }
        else //If if condition is not met
        {
            moneyAfter  = moneyStarting - valueTransaction; //Calculates variable moneyAfter
 
        }
 

        cout << "Total amount in the account is: " << moneyAfter << endl; //Outputs statement
        
        moneyAfter= moneyStarting; //Starts new loop with moneyAfter as the new moneyStarting   


    }

    return 0; //Returns the function
}

/*
How much money do you have in your bank account?
500
How many bank transactions did you do that day
3 
Type of transaction (1 for Debit and 0 for Credit)
0
How much was the transasction?
40
Total amount in the account is: 540
Type of transasction (1 for Debit and 0 for Credit)
1 
How much was the transaction?
60
Total amount in the account is:440 
Type of transaction (1 for Debit and 0 for Credit)
0 
How much was the transaction?
100 
Total amount in the account is: 600
Type of transaction (1 for Debit and 0 for Credit)
0 
How much was the transaction?
50 
Total amount in te account is: 550
 
*/