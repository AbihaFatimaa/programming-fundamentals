# include <iostream>
# include <string>
# include <fstream>
using namespace std;
int main(){
	ofstream oof("pattern1.pgm");
	if(!oof){
		cout<<"ERRORRRR";
		return 0;
	}
	oof<<"P2"<<endl;
	oof<<"256 256"<<endl;
	oof<<"255"<<endl;
	for(int i=0; i<256; i++){
		for(int j=0; j<256; j++){
			int val= (i+j)%255;
			oof<<val<<" ";
		}
		oof<<endl;
	}
	oof.close();
	cout<<"code executedd!!";
	return 0;
}