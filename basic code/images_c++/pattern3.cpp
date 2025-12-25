# include <iostream>
# include <string>
# include <fstream>
using namespace std;
int main(){
	ofstream oof("pattern3.pgm");
	if(!oof){
		cout<<"error";
		return 0;
	}
	oof<<"P2"<<endl;
	oof<<"256 256"<<endl;
	oof<<"255"<<endl;
	for(int i=0; i<256; i++){
		for(int j=0; j<256; j++){
			int row = i/32;
			int col = j/32;
			int gray;
			if((row+col)%2 == 0){
				gray = 0;
			}
			else {
				gray = 255;
			}
			oof<<gray <<" ";
		}
		oof<<endl;
	}
	oof.close();
	cout<<"code executed ^_^";
	return 0;
}