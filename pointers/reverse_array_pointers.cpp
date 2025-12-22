# include <iostream>
# include <string>
using namespace std;
int main(){
	int arr[7]={1,2,3,4,5,6,7};
	int* start = arr;
	int* end = arr+6;
	int temp;
	while(start<end){
	     temp = *start;
		*start = *end;
		*end = temp;
		
		start++;
		end--;
	}
	cout<<"rev array is: ";
	for(int i=0; i<7; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}