# include <iostream>
# include <string>
using namespace std;
float simpleinterest(float p,float r,float t){
	float si = (p*r*t)/100;
	return si;
}
int main(){
	float x,y,z;
	cout<<"enter the value of principle: "<<endl;
	cin>>x;
	cout<<"enter the value of rate: "<<endl;
	cin>>y;
	cout<<"enter the value of time: "<<endl;
	cin>>z;
	float SI = simpleinterest(x,y,z);
	cout<<"SI = "<<SI<<endl;
	return 0;
}