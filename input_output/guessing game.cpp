# include <iostream>
# include <string>
# include <cstdlib>
using namespace std;
 int main(){
 	cout<<"guess the number challenge."<<endl;
 	int n;
 	int a = rand()%50+1;
 	cout<<"enter a number between 1-50"<<endl;
 	cin>>n;
 	if(a == n){
 		cout<<"you guessed correct!!"<<endl;
 		cout<<"Congratulations!!"<<endl<<"YOU WON!!<3"<<endl;
	 }
	 else{
	 	cout<<"you lost!"<<endl<<"the number was: "<<a<<endl;
	 	cout<<"try again!!"<<endl;
	 }
 	return 0;
 }