#include<iostream>
#include<string>
#include<array>
using namespace std;

bool searcharray(int target, const array<int, 10>searchh) {
	for (int i = 0; i < 10; i++) {
        if (searchh[i] == target)
            return true;
    }
    return false;
}

int main(){
	array<int,10>ar={10,7,12,25,23,100,18,11,3,2};
	array<int,5>arr={10,6,7,25,100};
	int search;
	cout<<"enter the element to search: ";
	cin>>search;
	if(searcharray(search , ar)){
		cout<<"found"<<endl;
	}
	else{cout<<"not found"<<endl;
	}
	bool found=true;
	 for (int i = 0; i < 5; i++) {
        if (!searcharray(arr[i],ar)) {
            cout << arr[i] << " is NOT present in arr10." << endl;
            found = false;
}
if (found){
	cout<<"all elements of array 5 are in array 10";
}
else{
	cout<<"all elements not found in array 10";
}
return 0;
}}