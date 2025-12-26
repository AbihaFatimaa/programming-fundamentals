# include <iostream>
# include <string>
# include <fstream>
using namespace std;
int main(){
	ifstream ifile("numbers.txt");
	if(!ifile){
		cout<<"error!!";
		return 0;
	}
	double numbers[20];
	double sum = 0;
	for(int i=0; i<20; i++){
		ifile>>numbers[i];
		sum += numbers[i];
	}
	double avg = sum/20;
	cout<<"average is: "<<avg<<endl<<"numbers greater than average are: "<<endl;
	for(int i=0; i<20; i++){
		if(numbers[i] >= avg){
			cout<<numbers[i]<<endl;
		}
	}
	ifile.close();
	return 0;
}