# include<iostream>
# include <array>
# include<string>
using namespace std;
int main(){
	array<int,50>arr;
	int n;
	cout<<"enter the number of integers(less than 50):";
	cin>>n;
	int i=0;
	cout<<"enter the integers"<<endl;
	while(i<n){
		cin>>arr[i];
		i++;
	}
	int sum =0;
	for(int i=0; i<n; i++){
		sum = sum+arr[i];
	}
	int avg = sum/n;
	cout<<"average is: "<<avg<<endl;
    for(int j=0; j<n; j++){
    	if(arr[j]>avg){
    		cout<<arr[j]<<endl;
		}
	}
	return 0;	
}