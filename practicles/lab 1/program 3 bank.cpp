#include <iostream>
using namespace std;
class BankAcc {
private:
	string name;
    int bank_acc;
    int bank_balance;
public:
    BankAcc() {
        bank_acc = 0;
        bank_balance = 0;
    }void set_bank_name(string s) {
        name = s;}
    void set_bank_acc(int acc) {
        bank_acc = acc;
    }void set_bank_balance(int balance) {
        bank_balance = balance;}
    void set_cash_deposit(int amount) {
        bank_balance += amount;
        cout << "Cash deposited: " << amount << endl;}
    void set_cash_withdraw(int amount) {
        if (amount <= bank_balance) {
            bank_balance -= amount;
            cout << "Cash withdrawn: " << amount << endl;
        } else {cout << "Insufficient balance!" << endl;}}
void show() {
    	 cout << "Bank Account Name: " << name << endl;
        cout << "Bank Account Number: " << bank_acc << endl;
        cout << "Account Balance: " << bank_balance << endl;}};
int main() {
    BankAcc a;
	a.set_bank_name("Ilyan");
    a.set_bank_acc(0321);
    a.set_bank_balance(1000);
	a.show();
    a.set_cash_deposit(500);
    a.set_cash_withdraw(1000);
    cout<<endl;
    a.show();
    return 0;}

