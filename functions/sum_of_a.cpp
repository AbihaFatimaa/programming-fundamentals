/*Write a program that computes the value of a+aa+aaa+aaaa+...+aaa...a with a given digit as
the value of a, without using any cmath or other library functions. Note that
a+aa+aaa+aaaa+aaa...a is same as a1+a2+a3+...aa*/
# include <iostream>
# include <string>
using namespace std;
int main(){
	 int a;
	 cout<<"enter the value of a: "<<endl;
	 cin>>a;
	 int sum = 0;
	 for(int i=1; i<=a; i++){
	 	int prod = 1;
	 	for(int j=i; j>=1; j--){
	 		prod *= a;
		 }
		 sum += prod;
	 }
	 cout<< sum;
	 
	 
}