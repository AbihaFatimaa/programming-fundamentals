# include <iostream>
# include <string>
# include <fstream>
using namespace std;
int main(){
	ofstream oof("strips4.pgm");
	if(!oof){
		cout<<"ERRORR!!!";
		return 0;
	}
	oof<<"P2"<<endl;
	oof<<"256 256"<<endl;
	oof<<"15"<<endl;
	for (int i=0; i<256; i++){
		for(int j=0; j<256; j++){
			int val= j/16;
			int grayscale = val*16;
			oof<<grayscale<<" ";
		}
		oof<<endl;
	}
	oof.close();
	cout<<"code executed ^__^";
	return 0;
}