# include <iostream>
# include <string>
# include <iomanip>
# include <sstream>
# include <fstream>
using namespace std;
int main(){
	const int COUNTRIES = 228;
	const int COL = 6;
	string data[COUNTRIES][COL];
	int selectedCol[COL] = {0,1,2,3,4,5};
	ifstream ifile("countries of the world.csv");
	if(!ifile){
		cout<<"errorrrrrr!!";
		return 0;
	}
	string line;
	getline (ifile, line);
	
	int rowIndex = 0;
	while (getline(ifile, line) && rowIndex < COUNTRIES) {
        stringstream ss(line);
        string val;
        int colIndex = 0;
        int selIndex = 0;
        while (getline(ss, val, ',') && selIndex < COL) {
            if (colIndex == selectedCol[selIndex]) {
                data[rowIndex][selIndex] = val;
                selIndex++;
            }
            colIndex++;
        }
        rowIndex++;
    }
    ifile.close();
    ofstream ofile ("countries.txt");
    
     ofile<<left<<setw(28)<<"Country"<<left<<setw(12)<<"Region"
	 <<right<<setw(19)<<"Population"<<right<<setw(20)<<"Area"
	 <<right<<setw(20)<<"Density"<<right<<setw(20)<<"costline"
	 <<endl;
	 
     for(int i=0; i<rowIndex; i++){
ofile<< left << setw(28) << data[i][0]  
     << left << setw(12) << data[i][1]  
     << right << setw(19) << data[i][2] 
     << right << setw(20) << data[i][3] 
     << right << setw(20) << data[i][4] 
     << right << setw(20)  << data[i][5] 
     << endl;

		 }
	 ofile.close();
	 cout<<"code executed";
	return 0;
}