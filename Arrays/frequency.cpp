#include<iostream>
#include<string>
#include<array>
using namespace std;
int main(){
	array<int , 8>ab;
	for(int i=0; i<8; i++){
		cin>>ab[i];
	}
array<bool,8>printed={false};
for(int i=0; i<8; i++){
	if(printed[i]==false){
		int count =1;
		for(int j=i+1; j<8;j++){
			if(ab[i]==ab[j]){
				count++;
				printed[j]==true;}
		
			}
			if(count>1){
				cout<<ab[i]<<" ";
				printed[i]=true;
			}
		}
	}
}
