#include <iostream>
#include <string>
using namespace std;
int sumofdigits(int a){
int sum=0;
int c=0;
while(a>0){
	c=a%10;
	sum = sum+c;
	a=a/10;
}return sum;
}
bool wrestlerinteger(int x, int y){
	int sumx=sumofdigits(x);
	int sumy=sumofdigits(y);
	return sumx>sumy;
}
int main(){
	int a,b;
	cout<<"enter two integers: ";
	cin>>a>>b;
	cout<<sumofdigits(a)<<endl;
	cout<<sumofdigits(b)<<endl;
	if(wrestlerinteger(a,b)){cout<<"x is a wrestler as it defeats y"<<endl;
	}
return 0;	
	}
