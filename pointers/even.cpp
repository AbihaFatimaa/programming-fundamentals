/*Write a function using pointers to count the number of even elements in an array.*/
# include <iostream>
# include <string>
using namespace std;
int even_count (int* arr, int size){
	int count = 0;
	int* p = arr;
	for(int i=0; i<size; i++){
		if(*p%2==0){
			count++;
		}
		*p++;
	}
	return count;
}
int main(){
	int size;
	cout<<"enter the size of array: ";
	cin>>size;
	int arr[size];
	cout<<"enter the elements of array: ";
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	int count = even_count(arr, size);
	cout<<"count of even numbers is: "<<count;
	return 0;
}