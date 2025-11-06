# include <iostream>
# include <string>
using namespace std;
void stars (int n, char c){
	for(int i=0; i<n; i++){
		cout<<c;
	}return;
}
void starlength (int k, int m,char c){
	for(int i=0; i<k; i++){
		for(int j=0; j<m; j++){
			cout<<c;
		}
		cout<<endl;
	} return;
}
void pyramid (int n,char c){
	for(int i=0; i<n; i++){
		stars (i,c);
		cout<<endl;
		
	}}

int main(){
	int a=5; int m=4; char c='#';
	starlength (a,m,c);
	pyramid(a,c);
	return 0;
}