# include <iostream>
# include <fstream>
# include <string>
using namespace std;
struct record{
	string name;
	string roll;
	int marks;
};
int main(){
	record s;
	fstream file("records.txt", ios::out);        //add ios::binary for binary txt file
    cout<<"enter the number of students: ";
    int n; cin>>n;
    cin.ignore();
    for(int i=0; i<n; i++){
	cout<<"enter the students name, roll no.& marks: "<<endl;
	getline(cin, s.name);
	getline(cin, s.roll);
	cin>>s.marks;
	cin.ignore();
	//file.write((char*)&s, sizeof(s));  

 	file<<"name: "<<s.name<<endl<<"roll: "<<s.roll<<endl<<"marks: "<<s.marks<<endl;
	file<<endl;
	}
	file.close();
	return 0;
	
}