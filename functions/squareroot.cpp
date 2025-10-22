# include <iostream>
# include <string>
using namespace std;

int squareroot(int a){
	for(int i=1; i<=a; i++){
		if(i*i == a){ cout<<i ; return 0;
		}
		
	}cout<<"not a perfect square";
	return 0;}
int main(){
	int n;
	cin>>n;
	squareroot(n);
	return 0;
}