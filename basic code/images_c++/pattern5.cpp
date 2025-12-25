# include <iostream>
# include <string>
# include <fstream>
# include <sstream>
using namespace std;
int main(){
	ifstream ifile("img.pgm");
	ofstream ofile ("pattern5.pgm");
	if(!ifile){
		cout<<"error!!";
		return 0;
	}
	if(!ofile){
		cout<<"error!!";
		return 0;
	}
	string num;
	string line;
	int len, wid, max;
	getline(ifile, num);
	getline(ifile, line);
	stringstream ss(line);
	ss>>len>>wid;
	ifile>>max;
	
	ofile<<num<<endl;
	ofile<<len<<" "<<wid<<endl;
	ofile<<max<<endl;
	
	int number;
	for(int i=0; i<256; i++){
		for(int j=0; j<256; j++){
			ifile>>number;
			int invert = max-number;
			ofile<<invert<<" ";
		}
		ofile<<endl;
	}
	ifile.close();
	ofile.close();
	cout<<"image inverteed!!";
	return 0;
}