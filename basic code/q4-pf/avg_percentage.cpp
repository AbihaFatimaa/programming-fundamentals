/*Create a function to compute and return the percentage of data in array above above its
average.*/
#include <iostream>
# include <string>
#include <cstdlib> 
#include <ctime>
using namespace std;
float percentage_array (int arr[]){
	float sum =0;
	
	for(int i=0; i<10; i++){
		sum += arr[i];
	}
	int avg = sum/10; 
	float summ = 0;
	for(int i=0; i<10; i++){
		if(arr[i]>avg){
			summ += arr[i];
		}
	}
	float percent = summ/sum * 100;
	return percent;   
}
int main(){
	int arr[10];
	srand(time(0));
	int min = 100;  int max = 999;
	int range = max-min+1;
	int rv;
	for(int i=0; i<10; i++){
		arr[i] = rand()% range +100;
	}
	for(int j=0; j<10; j++){
		cout<<arr[j]<<" "<<endl;
	}
	float a = percentage_array (arr);
	cout<<"Percentage of data above average is "<<a<<"% "<<endl;
	return 0;
}





   