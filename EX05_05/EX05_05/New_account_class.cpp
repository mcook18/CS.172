#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Date
{
private:
	int month, day, year;

public:
	void Display(int, int, int); //this was missing

	Date(int m, int d, int y){
		month = m;
		day = d;
		year = y;
	}

};
class account{
private:
	int id;
	double balance;
	double anualInterestRate;
	
public:
	string name;
	vector<transaction> Transaction;
	account(){
		id = 0;
		balance = 0;
		anualInterestRate = 0;
	}
	account(int Id, double Balance, string Name){
		id = Id;
		balance = Balance;
		name = Name;
	}
	int getid();
	double getbalance();
	double getanualInterestRate();
	int setid();
	double setbalance();
	double(MonthlyInterst)();
	double withdraw(double amount);
	double deposite(double amount);
};
class transaction{
private:
	
	char _type;
	double _amount;
	double _balance;
	string _description;
public:
	transaction(char Type, double amount, double balance, string description){
		_type = Type;
		_amount = amount;
		_balance = balance;
		_description = description;
	}

};
int account::getid(){ return id; }
double account::getbalance(){ return balance; }
double account::getanualInterestRate() { return anualInterestRate; }
int account::setid(){ 
	int count=0;
	int _id = 100000 + count;
	count++;
	return _id;
}
double account::setbalance(){
	cout << "how much is in your account?";
	double Amount;
	cin >> Amount;
	return Amount;
}
double account::MonthlyInterst(){ 
	double monthly = anualInterestRate / 12;
	return monthly;
}
double account::withdraw(double amount){
	double NewBal = getbalance() - amount;
	string descrip;
	cin >> descrip;
	vector<transaction> Transaction('w', amount, NewBal, descrip);
}
double account::deposite(double amount){
	double NewBal = getbalance() + amount;
	string descrip;
	cin >> descrip;
	vector<transaction> Transaction('d', amount, NewBal, descrip);
}

int main(){
	account a();
	account a2;
	a2.setid();
	a2.setbalance();
	a2.withdraw(100.50);


}