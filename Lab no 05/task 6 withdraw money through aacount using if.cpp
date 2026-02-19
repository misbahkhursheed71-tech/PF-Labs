//withdraw money through aacount using if
#include<iostream>
using namespace std;
int main(){
 double balance, withdrawal_amount;
    // Ask the user for their account balance
    cout << "Enter your account balance: ";
    cin >> balance;
    // Allow the user to input the withdrawal amount
    cout << "Enter the amount you want to withdraw: ";
    cin >> withdrawal_amount;
    // Check if the withdrawal amount is less than or equal to the account balance
    if (withdrawal_amount <= balance){
    // Deduct the amount from the balance and display the remaining balance
    double remaining_balance = balance-withdrawal_amount;
    cout<< "Withdrawal successful."<<endl;
	cout<<"Remaining balance: " << remaining_balance; 
	}
    else 
    // Display a message: "Insufficient balance."
    {cout << "Insufficient balance." <<endl;
    }
   return 0;
}
