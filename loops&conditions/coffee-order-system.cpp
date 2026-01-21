//coffee shop order system.
# include <iostream>
# include <string>
using namespace std;
float totalBill (int a, int b, int c, int d){
	float sum = a+b+c+d;
	if(sum > 15){
		sum = sum*0.90;
	}
	float taxamount = sum*0.08;
	float total = sum+taxamount;
	return total;
}
int main(){
	cout << "Welcome to Coffee shop!" << endl << endl;
    cout << "Menu Options:" << endl;
    cout << "1. Espresso ($2.50)" << endl;
    cout << "2. Latte ($3.50)" << endl;
    cout << "3. Cappuccino ($3.00)" << endl;
    cout << "4. Mocha ($4.00)" << endl;
    cout<<"5. done."<<endl<<endl;
    int choice;
    float q1=0, q2=0, q3=0, q4 =0;
    while (true){
    	float q;
    	cout<<"choose an option: "<<endl;
    	cin>>choice;
    	cin.ignore();
    	if(choice == 1){
    		cout<<"enter quantity: "<<endl;
    		cin>>q;
    		q1 = q1 + (q * 2.50);
		}
		else if (choice == 2){
			cout<<"enter quantity: "<<endl;
			cin>>q;
			q2 = q2+(q * 3.50);
		}
		else if (choice == 3 ){
			cout<<"enter quantity: "<<endl;
			cin>>q;
			q3 = q3+(q * 3.00);
		}
		else if (choice == 4){
			cout<<"enter quantity: ";
			cin>>q;
			q4 = q4+(q*4.00);
		}
		else if (choice == 5){
		   cout<<"thank you for the order!"<<endl;
		   break;
		}
		else{
			cout<<"invalid option(choose from 1-4)"<<endl;
		}
	}
	float total = totalBill(q1, q2, q3, q4);
	cout<<"Your total is: "<<total<<"$"<<endl;
	return 0;
} 