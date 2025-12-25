# include <iostream>
# include <string>
# include <fstream>
using namespace std;
int main(){
	ofstream ofile("strips3.pgm");
	if(!ofile){
		cout<<"error";
		return 0;
	}
	ofile<<"P2"<<endl;
	ofile<<"256 256"<<endl;
	ofile<<"255"<<endl;
	for(int i=0; i<256; i++){
		for(int j=0; j<256; j++){
			ofile<<j<<" ";
		}
		ofile<<endl;
	}
	ofile.close();
	cout<<"code executed!";
	return 0;
}