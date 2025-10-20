/*An integer K which cannot be divisible by all the integers in range 2 to K-1 is a prime number.
Write a function named isPrime that returns true (1) if its only integer parameter is a prime
number, otherwise it returns false(0). Later, call the function in main to demonstrate its
working. Run the program several times for different integers and prepare a table with
integer in first column and word prime or not prime in second column.*/

# include <iostream>
# include <string>
using namespace std;

bool isPrime (int n){
	int a=2;
	if(n<=1){
	return false;
	}
	while (a<n){
		if(n%a==0){
		return false; 
	}
	a=a+1;
	}
	return true;
}
int main(){
	int s;
	cout<<"enter an integer: ";
	cin>>s;

	bool results = isPrime(s);
	cout<<"isPrime: "<<results;
	return 0;
}