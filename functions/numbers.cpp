#include<iostream>
#include<string>
using namespace std;
void right (int n){
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<j;
		}cout<<endl;
	}
}
void left(int n){
	for(int k=1; k<=n; k++){
		for(int i=0; i<n-k; i++){
		cout<<" ";}
		for(int j=1; j<=k; j++){
			cout<<j;
		}
	cout<<endl;}
}
void central (int n){
	for(int k=1; k<=n; k++){
		for(int i=0; i<n-k; i++){
		cout<<" ";}
		for(int j=1; j<=k; j++){
			cout<<j;
		}
		for(int m=k-1;m>=1;m--){
			cout<<m;
		}
	cout<<endl;}
}
void num(int n){
	for(int i=1; i<=n; i++){
		for(int k=1;k<=n; k++){
			cout<<k;
		}cout<<endl;
	}
}
void number(int n){
	for(int i=1; i<=n; i++){
		for(int k=i; k<=i+n; k++){
			cout<<k;
		}cout<<endl;
	}
}
int main(){
	int n=4;
	right(n);
	cout<<endl;
	left(n);
	cout<<endl;
	central(n);
	cout<<endl;
	num(n);
	cout<<endl;
	number(n);
	return 0;
}