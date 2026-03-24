#include<iostream>
using namespace std;

class Account {
private:
    int accountNumber;
    double balance;

public:
    Account(int accNo, double bal) {
        accountNumber = accNo;
        balance = bal;
    }

    void displayAccount() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
    double getBalance() {
        return balance;
    }
};

class SavingsAccount : public Account {
private:
    double interestRate;

public:
    SavingsAccount(int accNo, double bal, double rate)
        : Account(accNo, bal) {
        interestRate = rate;
    }

    void calculateInterest() {
        double interest = getBalance() * interestRate / 100;
        cout << "Interest: " << interest << endl;
    }
};

int main() {
    SavingsAccount s(12001, 1000, 5);
    s.displayAccount();
    s.calculateInterest();
    return 0;
}