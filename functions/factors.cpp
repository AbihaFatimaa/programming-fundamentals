# include <iostream>
# include <string>
# include <cmath>
using namespace std;
void factors (double a, double b, double c){
	double disc = (b*b-(4*a*c));
	if (disc<0){
		cout<<"no real roots exists"<<endl;
		return ;
	}
	double root1 = (-b + sqrt(disc))/(2*a);
	double root2 = (-b - sqrt(disc))/(2*a);
	cout<< "the factors of quadratic equation are: ";
	cout<<"(x- "<<root1<<")"<<"&"<<"(x- "<<root2<<")"<< endl;
 
	
}
int main(){
	double a,b,c;
	cout<<"enter values of a,b,c: ";
	cin>>a>>b>>c;
	factors(a,b,c);
	cout<<factors<<endl;
	return  0 ;
}