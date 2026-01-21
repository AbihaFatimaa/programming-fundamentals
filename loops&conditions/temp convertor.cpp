//temperatur converter and forecaster.
# include <iostream>
# include <string>
using namespace std;
void farhenhiet(float a[5]){
	for(int i=0; i<5; i++){
		a[i] = (a[i]*9/5)+32;
	}
	cout<<"temp in farhenhiet: "<<endl;
	for(int i=0; i<5; i++){
		cout<<a[i]<<"F"<<endl;
	}
	
}
void kelvin(float a[5]){
	for(int i=0; i<5; i++){
		a[i] = a[i]+273;
	}
	cout<<"temp in kelvin: "<<endl;
	for(int i=0; i<5; i++){
		cout<<a[i]<<"K"<<endl;
	}
}
int main(){
	float temp[5];
	cout<<"enter temperature for five days: "<<endl;
	float sum = 0;
	for(int i=0; i<5; i++){
		cin>>temp[i];
		sum +=temp[i];
	}
	float avg = sum/5;
	for(int i=0; i<5; i++){
		if(temp[i]<0){
			cout<<"Freezing"<<endl;
		}
		else if (temp[i]>=0 && temp[i]<=10){
			cout<<"cold"<<endl;
		}
		else if (temp[i]>=11 && temp[i]<=20){
			cout<<"cool"<<endl;
		}
		else if(temp[i]>=21 && temp[i]<=30){
			cout<<"warm"<<endl;
		}
		else{
			cout<<"hot"<<endl;
		}
		}
		int max =0, min =0;
	for(int i=0; i<5; i++){
		if(temp[i]>temp[max]){
			max = i;
		}
		if(temp[i]<temp[min]){
			min = i;
		}
	}
	cout<<"max temperature is: "<<temp[max]<<"C"<<endl;
	cout<<"min temperature is: "<<temp[min]<<"C"<<endl;
	
	farhenhiet(temp);
	kelvin(temp);
	
	return 0;
}