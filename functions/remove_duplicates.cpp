/*Please write a program to remove duplicates in a sorted array of dynamic size with data size
variable. The 15 sized array {0,0,0,3,4,4,5,8,8,8,8,8,8,9,9,9,4,6,34,32,32,54,34,54,...} should
be a 6 sized array as {0,3,4,5,8,9,5,8,8,8,8,8,8,9,9,9,4,6,34,32,32,54,34,54,...} after removal of
duplicates in data.*/
# include<iostream>
# include<array>
# include<string>
using namespace std;
int removingduplicates(int arr[], int ds){
	int j=0;
    for(int i=1; i<ds; i++){
    	if(arr[i]!= arr[j]){
    		j++;
    		arr[j] = arr[i];
		}
		
	}
	return j+1;
}
int main(){
	const int as =100;
	int arr[as];	
	int ds;
	cout<<"enter array size: ";
	cin>> ds;
	for(int i=0; i<ds; i++){
		cin>>arr[i];
	}
int nds = removingduplicates (arr,ds);
cout<<"array after duplicates: "<<endl;
for(int i=0; i<nds; i++){
	cout<<arr[i]<<" ";
}	
	return 0;
}








