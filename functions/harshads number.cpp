/*A number is called a Harshad number (or Niven number) if it is divisible by the sum of its
digits. Write a program (functions may be used) to print all Harshad numbers from 1 to 500.*/

# include<iostream>
# include<string>
using namespace std;
bool harshad(int n){
	int org = n;
	int sum=0; int c;
	while(n>0){
		c=n%10;
		sum=sum+c;
		n=n/10;
	} return (org%sum == 0);
}
int main(){
	for(int i=1; i<=500; i++){
		if(harshad(i)){
			cout<<i<<" ";
		}
	}
	return 0;
}