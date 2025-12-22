# include <iostream>
# include <string>
using namespace std;
int main(){
	int len;
	cout<<"enter the len of array: ";
	cin>>len;
	 int* arr = new int[len];  
	for(int j=0; j<len; j++){
		cin>>arr[j];
	}
	int* p = arr;
	int max_len = *p;
	for(int i=0; i<len; i++){
		if(*(p+i)>max_len){
			max_len = *(p+i);
		}
	}
	cout<<"maximum element in array is: "<<max_len<<endl;
	delete []arr;
	return 0;
	
}