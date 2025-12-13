/*Write a program to find the length of the longest contiguous subarray whose sum is exactly a
given k input by console.*/
# include <iostream>
# include <string>
# include <ctime>
# include <cstdlib>
using namespace std;
int main(){
	const int as = 100;
	int arr[as];
	int ds;
	cout<<"enter the size of array: ";
	cin>>ds;
	int min = 100;
	int max =999;
	int range = max-min+1;
	for(int i=0; i<ds; i++){
	    arr[i] = rand()%range +100;
	}
	for(int j=0; j<ds; j++){
		cout<<arr[j]<<" ";
	}
	cout<<endl;
	int k;
	cout<<"enter the value of k: ";
	cin>>k;
	int maxlen =0;
	int start; int finish;
	for( start=0; start<ds; start++){
		int sum=0;
		for( finish=start; finish<ds; finish++){
			sum += arr[finish];
			if(sum == k){
				int len = finish - start +1;
			if(maxlen < len){
				maxlen = len;
			}}
		}
	}
	cout<<"length of sub array with sum = k is: "<<maxlen<<endl;
	return 0;
}