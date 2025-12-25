# include <iostream>
# include <string>
# include <fstream>
using namespace std;
int main(){
	ofstream oof("strips2.pgm");
	if(!oof){
		cout<<"error";
		return 0;
	}
	oof<<"P2"<<endl;
	oof<<"256 256"<<endl;
	oof<<"15"<<endl;
	for(int i=0; i<256; i++){
		int val = i/16;
		for(int j=0; j<256; j++){
			oof<<val<<" ";
		}
		oof<<endl;
	}
	oof.close();
	cout<<"code executed!";
	return 0;
}