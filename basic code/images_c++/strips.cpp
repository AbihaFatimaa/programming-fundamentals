# include <iostream>
# include <string>
# include <fstream>
using namespace std;
int main(){
	ofstream ofile("strips.pgm");
	if(!ofile){
		cout<<"error";
		return 0;
	}
	ofile<<"P2"<<endl;
	ofile<<"256 256"<<endl;
	ofile<<"3"<<endl;
	for (int i = 0; i < 256; i++) {          
        for (int j = 0; j < 256; j++) {      
            
            if (i < 64)
                ofile << 2 << " ";
            else if (i < 128)
                ofile << 0 << " ";
            else if (i < 192)
                ofile << 3 << " ";
            else
                ofile << 1 << " ";
        }
        ofile << endl;   
    } ofile.close();
	cout<<"code executed!";
	return 0;
}