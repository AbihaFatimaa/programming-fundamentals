# include <iostream>
# include <string>
# include <fstream>
# include <sstream>
using namespace std;
int main(){
	ifstream ifile("pattern7.ppm");
	ofstream ofile ("pattern6.ppm");
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
	
	int r,g,b;
	for(int i=0; i<256; i++){
		for(int j=0; j<256; j++){
			ifile>>r>>g>>b;
			int invr = max-r;
			int invg = max-g;
			int invb = max-b;
			ofile<<invr<<" "<<invg<<" "<<invb<<" ";
		}
		ofile<<endl;
	}
	ifile.close();
	ofile.close();
	cout<<"image inverteed!!";
	return 0;
}