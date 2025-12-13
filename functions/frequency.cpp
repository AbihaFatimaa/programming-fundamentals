/*In a very large sized array, the values are repeated between 21 and 30, you have to compute
frequency of each value into an array of size 10.*/
# include <iostream>
# include <string>
using namespace std;
int main(){
	  int ds;
	  cout<<"enter size of array: ";
	  cin>>ds;
	  int arr[ds];
	  cout<<"enter values from 21 to 30";
	  for(int i=0; i<ds; i++){
	  	cin>>arr[i];
	  }
	  int frequency[10] = {0};
	  for(int i=0; i<ds; i++){
	  	int index = arr[i]-21;
	  	frequency[index]++;
	  }
	  cout<<"frequency of each no. is: ";
	  for(int j=0; j<10; j++){
	  	cout<<21+j<<" ---> "<<frequency[j]<<endl;
	  }
	  return 0;
}