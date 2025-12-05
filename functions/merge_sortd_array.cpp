#include<iostream>
# include<string>
# include<array>
using namespace std;
void merge_sorted_array(array<int,4>ar, array<int,5>as){
	int i=0; int j=0; int k=0;
	array<int,9>mer;
	while(i<4 && j<5){
		if(ar[i]<= as[j]){
			mer[k++]=ar[i++];
		}
		else{
			mer[k++]=as[j++];
		}
	}
	while(i<4){
		mer[k++]=ar[i++];
	}
	while(j<5){
		mer[k++]=as[j++];
	}
	for(int i=0; i<9; i++){
		cout<<mer[i];
	}
}
int main(){
	array<int,4>array1={2,6,9,12};
	array<int,5>array2={1,5,5,6,10};
	merge_sorted_array(array1,array2);
	return 0;
}