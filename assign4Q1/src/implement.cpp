#include <iostream>
#include "account.h"
using namespace std;

double Account::getBalance() const {
	return balance;
}

void Account::setBalance(double balance) {
	this->balance = balance;
}

int Account::getId() const {
	return id;
}

void Account::setId(int id) {
	this->id = id;
}

Account_type Account::getType() const {
	return type;
}

void Account::setType(Account_type type) {
	this->type = type;
}
void Account::accept()
{
   cout<<"Enter ID: ";
   cin>>
}
