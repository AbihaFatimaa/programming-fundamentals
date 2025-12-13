# include<iostream>
# include<string>
# include<array>
using namespace std;
void merged_sorted_array(array<int,1>a,array<int,2>b){
	array<int,3>m={};
		int i=0, j=0, k=0;
	while(i<3 && j<4){
		if(a[i]<b[j]){
			m[k++]=a[i++];
		}
		else {
			m[k++]=b[j++];
		}}
		while(i<3){
			m[k++]=a[i++];
		}
		while(j<4){
			m[k++]=b[j++];
		}
		for(int i=0; i<3;i++){
			cout<<m[i];
		}
	
}
int main(){
	array<int,1>a1 = {};
	array<int,2>a2 = {5,10};
	array<int,3>merged;
 merged_sorted_array(a1,a2);

	
	return 0;
}