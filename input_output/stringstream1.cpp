# include <iostream>
# include <string>
# include <sstream>
using namespace std;
int main(){
	string s;
	cout<<"enter a string with numbers: "<<endl;
	getline(cin,s);
    stringstream ss(s);
    int x; int sum=0;
	while(ss >> x){
		sum += x;
	}
	cout<<"the sum is: "<<sum<<endl;
	return 0;
}