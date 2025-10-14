# include <iostream>
# include <string>
using namespace std;
double area (double b){
	double a = 3.14;
	return (a*b*b);
}
int main(){
	double r;
	cout<<"enter the radius of circle: ";
	cin>>r;
	double A = area(r);
	cout <<A<<endl;
	return 0 ;
}
