/*Write a function that outputs all the divisors of an integer. Divisor of an integer N is another
integer between range 1 and N, which divides it completely, i.e., remainder is 0. Later, call
the function in main to demonstrate its working. Run the program several times for different
integers and prepare a table with integer in first column and its divisors in second column.*/
# include <iostream>
# include <string>
using namespace std;

void divisors (int a){
	int b = 1;
	cout<<"divisors of "<< a <<" are: ";
	while(b<=a){
		if(a%b==0){
			cout<<b<<" ";
		}
		b = b+1;
	} return;
	
}
int main(){
	int n;
	cout<<"enter an integer: ";
	cin>>n;
    divisors (n);
    cout<< endl;
	return 0;
}