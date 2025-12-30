/*For the provided file (pakcities.txt) with fixed length record length format, programmatically compute its size as
count of bytes and count of records in the file, and display both of them. Next, using seekg with appropriate
parameters, display the last three records (in case file has fewer than three records, just display error message
insufficient data). Lastly, without using array of structs, display the record placed prior to the city named
mingora, and update its name to jalal abad, and latitude and longitude to 73.0143306, 34.501341 respectively*/

# include <iostream>
# include <string>
# include <fstream>
using namespace std;
struct city
{
	string name;
	double lat;
	double lon;
};

int main(){
	fstream oof ("pakcities.txt", ios::in| ios::out| ios::binary);
	if(!oof){
		cout<<"error";
		return 0;
	}
	oof.seekg(0, ios::end);
	int long size = oof.tellg();
	cout<<"file size: "<<size<<endl;
	int record = sizeof(city);
	int recordsize = size/record;
	cout<<"record count: "<<recordsize;
	return 0;
}