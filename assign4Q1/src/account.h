
#ifndef ACCOUNT_H_
#define ACCOUNT_H_

enum Account_type{
	No_Type=0,Save,Current,Dmat
};
class Account{
	int id;
	Account_type type;
	double balance;
public:
	Account();
	Account(int id,Account_type t);
	void accept();
	void display();
	double getBalance() const;
	void setBalance(double balance);
	int getId() const;
	void setId(int id);
	Account_type getType() const;
	void setType(Account_type type);
};


#endif /* ACCOUNT_H_ */
