/*A number is called a palindrome number if it remains the same when its digits are
reversed. Write a program (you may define necessary helper functions) to display all palindrome
numbers between 1 and 1,000.*/

# include<iostream>
#include <string>
using namespace std;
bool palindrome(int n){
	int rev=0;
	while(n!=0){
	rev= rev*10 + n%10;
	n=n/10;}
	return (rev == n);
}
int main(){
	for(int i=1; i<=1000; i++){
	if(palindrome){
		cout<<i<<" ";
	}	
	}
	return 0;
	
}