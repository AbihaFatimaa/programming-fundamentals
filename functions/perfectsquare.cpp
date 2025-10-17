/*If square root of an integer F is an integer, F is called a perfect square. Write a function and
demonstrate it which tests whether an integer is a perfect square or not.*/

# include <iostream>
# include <string>
using namespace std;
bool perfectsquare (int f){
	int a=1;
	while(a<=f){
		if(a*a==f){
        return true;			
		}
		a = a+1;
	} 
	return false;
}
int main(){
	int b;
	cout<<"enter an integer: ";
	cin>>b;
	bool ps = perfectsquare(b);
	cout<<ps;
	return 0;
}