//Take 5 integers from the user and print them in reverse order.

# include<iostream>
#include<string>
#include<array>
using namespace std;
int main(){
	array<int,5>num;
	int i=0;
	cout << "Enter 5 integers:\n";
    while (i < 5) {
        cin >> num[i];
        i++;
    }
	int f=5;
	while(f>0){
		cout<<num[f]<<endl;
		f--;
	}
	return 0 ;
}