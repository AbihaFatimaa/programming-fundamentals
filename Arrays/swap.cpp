//Swap the first and last elements of an array.
#include<iostream>
#include <string>
# include <array>
using namespace std;
int main(){
	array<int,5>swap;
	int i=0;
	cout<<"enter 5 numbers: ";
	while(i<5){
		cin>>swap[i];
		i++;
	}
	int temp=swap[0];
	swap[0]=swap[4];
	swap[4]=temp;
	i=0;
	while(i<5){
		cout<<swap[i]<<endl;
		i++;
	}
	return 0;
}