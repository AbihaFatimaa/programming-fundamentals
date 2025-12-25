# include <iostream>
# include <string>
# include <fstream>
using namespace std;
int main(){
	ofstream ofile("pattern4.ppm");
	if(!ofile){
		cout<<"error";
		return 0;
	}
	ofile<<"P3"<<endl;
	ofile<<"256 256"<<endl;
	ofile<<"255"<<endl;
	for(int i=0; i<256; i++){
		for(int j=0; j<256; j++){
			int row = i/16;
			int col = j/16;
			int gray;
			if((row+col) % 2 == 0){
				gray = 30;
			}
			else{
				gray = 230;
			}
			ofile<<gray<<" "<<gray<<" "<<gray<<" ";
		}
		ofile<<endl;
	}
	ofile.close();
	cout<<"executed!!";
	
	return 0;
}