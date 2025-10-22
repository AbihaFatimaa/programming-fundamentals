# include <iostream>
# include <string>
using namespace std;
void syracusesequence (int a){
	while (a!=1){
		if (a%2==0){
			a=a/2;
			cout<<a<<endl;
		}
		else{
			a=((a*3)+1);
			cout<<a<<endl;
		}
		
	}
	return;
}
int main(){
	int n;
	cin>>n;
	syracusesequence(n);
	return 0;
}