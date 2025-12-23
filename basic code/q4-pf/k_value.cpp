/*Please write a program to find the kth ranked value in an array of size n, where n >= k, without
sorting array. The kth ranked value is the value at kth location in array, if it is sorted.*/
# include <iostream>
# include <string>
# include <ctime>
# include <cstdlib>
using namespace std;
int main(){
	const int as = 1000;
	int arr[as];
	srand(time(0));
	int ds;
	cout<<"enter the size of array:";
	cin>>ds;
	int min = 100; int max = 999;
	int range = max-min+1;
	for(int i=0; i<ds; i++){
	  arr[i] = rand()% range +100;
	}
	for(int i=0; i<ds; i++){
		cout<<arr[i]<<" "<<endl;
	}
	int k;
	cout<<"enter the value of k: ";
	cin>>k;
	int k_val;
    const int ABC = 1000;
	for(int i=1; i<ds; i++){
		int min_val = ABC;
		int min_ind = -1;
		for(int j=0; j<ds; j++){
			if(arr[j]<min_val){
				min_val = arr[j];
				min_ind = j;
			}}
			if(i == k){
				k_val = min_val;
			}
			arr[min_ind] = ABC;
	}
	cout<<"the "<<k<<"th ranked value is: "<<k_val<<endl;
	return 0;
}