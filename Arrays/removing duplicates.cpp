# include<iostream>
# include<array>
# include<string>
using namespace std;
int removingduplicates(array<int,8>ar,array<int,8>&unique){
	int uniquecount=0;
	for(int i=0;i<8;i++){
		bool duplicate=false;
		for(int j=0; j<i;j++){
			if(ar[i]==ar[j]){
				duplicate = true;
				break;
			} }
			if(!duplicate){
				unique[uniquecount] = ar[i];
				uniquecount++;
			}
		
	}return uniquecount;
}

int main(){
	array<int,8>arr;
	array<int,8>uniquearr;
	for(int i=0; i<8;i++){
		cin>>arr[i];
	}
cout<<"after removing duplicates: ";
int count=removingduplicates(arr,uniquearr);
for(int i=0;i<count; i++){
	cout<<uniquearr[i];
}

	return 0;
}