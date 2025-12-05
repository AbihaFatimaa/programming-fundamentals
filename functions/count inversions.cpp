#include<iostream>
#include<string>
#include<array>
using namespace std;
int count_inversions (array<int,5>arr){
	int count=0;
	for(int i=0; i<4;i++){
		for(int j=i+1; j<5;j++){
			if(arr[i]>arr[j]){
				count++;
				cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
			}
		}
	}
	return count;
}
int main(){
	array<int,5>ds={1,5,2,8,3};
	int a=count_inversions(ds);
	cout<<a;
	return 0;
}