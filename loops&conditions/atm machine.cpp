//simple atm machine.
# include <iostream>
# include <string>
using namespace std;
int main(){
	int initialbal = 1000;
	cout<<"options:"<<endl;
	cout<<"1. check balance"<<endl;
	cout<<"2. withdraw"<<endl;
	cout<<"3. deposit"<<endl;
	cout<<"4. quit"<<endl;
	int option;
	int count =0;
	int balance = initialbal;
	while (true){
		cout<<"enter a number:";
		cin>>option;
		cin.ignore();
		
	    if(option == 1){
			cout<<"current balance: "<<balance<<endl;
		}
		else if(option == 2){
			if(option == 2){
			count++;
			if(count == 5){
				cout<<"cant withdraw!!";
				break;
			}
		}
			int amount;
			cout<<"enter amount to withdraw: "<<endl;
			cin>>amount;
			if(amount>balance){
				cout<<"amount can't be withdrawn"<<endl;
				break;
			}
			balance = balance-amount-2;
			cout<<"RECIEPT"<<endl;
			cout<<"withdrawn amount: "<<amount<<endl;
			cout<<"remaining balance: "<<balance<<endl;
			cout<<"withdrawl fee: "<<"2$"<<endl;
		}
		else if(option == 3){
			int amount;
			cout<<"enter amount to deposit: ";
			cin>>amount;
			balance = balance+amount;
			cout<<"total balance is : "<<balance;
			cout<<endl;
		}
		else if(option == 4){
			break;
		}
		else{
			cout<<"invalid option!!";
		}
	}
	return 0;
}