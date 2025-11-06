#include<iostream>
# include<array>
#include<string>
# include <cmath>
using namespace std;
int factorial(int n){
	int ans=1;
	for(int i=1; i<=n; i++){
		ans = ans*i;
	}
	return ans;
}
int gcd(int a, int b){
	while(b!=0){
		int t=b;
		b=a%b;
		a=t;
	}return a;
}
int sumofdigits(int c){
	int r; int sum=0;
	while(c>0){
		r=c%10;
		sum=sum+r;
		c=c/10;
	}return sum;
}
float perimeter(float l, float w){
	float per = 2*(l+w);
	return per;
}
int count(string n){
	int count =0;
	for(int i=0; n[i]!='\0'; i++){
		count++;
	}return count;
}
void rev(string n){
int count =0;
	for(int i=0; n[i]!='\0'; i++){
		count++;}
	for(int i=count-1; i>=0; i--){
		cout<<n[i];
	}
}
double polynomial(array<double,5>ar, int deg, double x){
	double ans=0;
	for(int i=0; i<=deg; i++){
		ans = ans + ar[i]* pow(x,i);
	}return ans;
}
int main(){
	int n =3;
	int a=factorial(n);
	cout<<"Factorial is: "<<a<<endl;
	int b=12; int c=24;
	cout<<"GCD is: "<<gcd(b,c)<<endl;
	int d=34;
	cout<<"sum of digits is: "<<sumofdigits(d)<<endl;
	float e= 2.0; float f=4;
	cout<<"Perimeter is: "<<perimeter(e,f)<<endl;
	string g="i love pakistan.";
	cout<<count(g)<<endl;
	rev(g);
	cout<<endl;
	array<double,5>arr = {3,2,4,0,0};
	int deg = 2;
	double x=2;
	cout<<polynomial(arr , deg, x);
}