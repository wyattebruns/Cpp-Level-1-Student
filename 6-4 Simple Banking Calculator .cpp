#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <cstdlib>
#include <ctime>

using namespace std;

//this controls the deposit feature so you can add in money

float deposit (float balance){
float new_balance_deposit;
float deposit_amount;
cout << "How much money do you want to deposit\n";
cin >> deposit_amount;

new_balance_deposit = balance + deposit_amount;

return new_balance_deposit;
}

//This controls the withdraw feature so you can take out money

float withdraw (float balance){
float new_balance_withdraw;
float withdraw_amount;
cout << "How much money do you want to withdraw\n";
cin >> withdraw_amount;

new_balance_withdraw = balance - withdraw_amount;

return new_balance_withdraw;
}


//This controls the invest feature so you can invest money

float invest (float balance, float &investment){
float investment_amount;
int percent;

cout << "How much money do you want to invest\n";
cin >> investment_amount;

balance = balance - investment_amount;
investment = investment + investment_amount;

//creates a random percent so that evey investment is random

percent = (rand() % 401) - 200;
investment = investment + (investment * (percent / 100.0));

//tells

cout << "Your investment changed by " << percent << "%" << endl;
cout << "Your investment portfolio is now $" << investment << endl;

return balance;
}



int main()
{
srand(time(0));

float balance;
float investment = 0;
string input;
float interest_gained;

cout << "How much money do you want to start in your bank account.\n";
cin >> balance;
cout << endl;

while(true){

//telling you how much money you have in each account so you dont loose track

cout << "You have $"<< balance << endl;
cout << endl;
cout << "You have $" << investment << " invested\n\n";
cout << "what task do you want to do (Deposit, Withdraw, Invest, or Exit)\n";
cin >> input;
cout << endl;


//what ever you put gets converted into lowercase so that capitalizeation doesn't matter


transform(input.begin(), input.end(), input.begin(), [](unsigned char c){ return tolower(c); });

if (input == "deposit"){
balance= deposit(balance);
}

else if(input== "withdraw"){
balance= withdraw(balance);
}

else if(input== "invest"){
balance = invest(balance, investment);
}

else if(input== "exit"){

if (balance >= 0){
    cout<< "Thank you for using this ATM";
    break;
}

//so you dont scam the atm

else if( balance < 0){
cout << endl;
cout << "You can't have a negative balance.\n";
cout << "Add more money by using the deposit feature.\n";
cout << endl;
}

}

if (balance >= 0) {
interest_gained = balance * 0.03;

cout << endl;
cout << "You gained $" << interest_gained << " from interest." << endl;
cout << endl;
balance *= 1.03;
}

else if(balance < 0){
cout << endl;
cout << "You can't gain interest with a negative balance." << endl;
cout<< endl;
}
}

return 0;
}

https://onecompiler.com/cpp/44xy4akxj
