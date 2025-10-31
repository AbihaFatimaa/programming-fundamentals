/*Write a C++ program that takes an array of integers as input and uses functions to perform the following tasks:

Find and return the maximum and minimum values in the array.

Calculate and return the average of all the elements.

Create a new array that stores only the unique elements (remove duplicates) from the original array.

Finally, display all results in the main() function.*/

# include <iostream>
# include <string>
# include <array>
using namespace std;
int minmax ( array <int, 5> ar){
	int min = ar[0];
	int max = ar[0];
	int i=0;
	while(i<5){
		if(min>ar[i]){
			min = ar[i];
		}i++;
	}
	int j=0;
	while(j<5){
		if(max < ar[j]){
			max = ar[j];
		}j++;
	}
	cout<<"min: "<<min<<endl;
	cout<<"max: "<<max<<endl;
	return 0;
}
int average (array <int, 5>ar){
	double avg;
	int sum = 0;
	int i=0;
	while(i<5){
		sum =sum+ar[i];
		i++;
	}
	avg = sum/5;
	cout<<"average is: "<<avg;
	return 0;
}


int main(){
	array<int , 5>arr;
	cout<<"enter the value: ";
	int i=0;
	while(i<5){
		cin>> arr[i];
		i++;
	}
	minmax (arr);
	average (arr);
	return 0;
}