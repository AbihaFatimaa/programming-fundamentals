/*Write and demonstrate a function that outputs all the prime factors of an integer.*/

# include <iostream>
# include <string>
using namespace std;
void primefactors (int n){
	int a = 2;
	cout<<"prime factors of "<<n<<" are: ";
	while (a<=n){
		if (n%a==0){
			cout<<a<<", ";
			n=n/a;
		}
		else {
			a = a+1;
		}
	}return;
}
int main(){
	int p;
	cout<<"enter an integer: ";
	cin>>p;
	primefactors(p);
	cout<<endl;
	return 0;
}