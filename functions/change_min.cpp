# include<iostream>
# include<exception>
# include<string>
# include<array>
using namespace std;
int change_min_change(array<int,2>notes, int total_cost, int cash_paid){
	int balance_due = cash_paid - total_cost;
	cout<<balance_due<<endl;
	if(cash_paid<total_cost){
		runtime_error ex {"Error: cash paid is less than total cost!"};
		cout<<ex.what();
	}
	if(balance_due ==0){
		return 0;
	}
	for(int i=0; i<2; i++){
		for(int j=0; j<2-i-1; j++){
			if(notes[j]<notes[j+1]){
			int t=notes[j];
			notes[j]=notes[j+1];
			notes[j+1]=t;}
		}
	}
	int count;
	int rem = balance_due;
	for(int i=0; i<2; i++){
		while(rem >=notes[i]){
	if(count>0){
		cout<<"+";
	}
	cout<<notes[i];
	rem = rem-notes[i];
	count++;
		}
		
		}
		cout<<endl;
	
	if(rem!=0){
		runtime_error ex("Error: can't form exact change with given notes");
		cout<<ex.what();
		cout<<endl;
	}
	cout<<"notes required:";
	return count;
}
int main(){
	array<int,2>notes={10,20};
	int total = 50;
	int cash = 45;
	int a=change_min_change(notes,total,cash);
	cout<<a;
	return 0;
	
}