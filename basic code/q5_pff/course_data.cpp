# include <iostream>
# include <string>
# include <iomanip>
# include <fstream>
using namespace std;
struct course{
	string code;
	string name;
	int chours;
	int semester;
	string status;
};
int main(){
	int n;
	cout<<"enter the number of course: ";
	cin>>n;
	cin.ignore();
	
	course course_arr[n];
	for(int i=0; i<n; i++){
		cout << "Enter course code: ";
		getline(cin, course_arr[i].code);
		cout << "Enter course name: ";
		getline(cin, course_arr[i].name);
		cout << "Enter credit hours: ";
		cin >> course_arr[i].chours;
		cout << "Enter semester: ";
		cin >> course_arr[i].semester;
		cin.ignore();  
		cout << "Enter status: ";
		getline(cin, course_arr[i].status);

	}
	ofstream ofile1("Data-1.txt");
	if(!ofile1){
		cout<<"ERROR!!!!";
		return 0;
	}
	ofstream ofile2 ("Data-2.txt");
	if(!ofile2){
		cout<<"ERROR!!!!";
		return 0;
	}
	ofile1<<"Code"<<", "<<"Title"<<", "<<"Credit Hours"<<", "<<"Semester"<<", "<<"Status"<<endl;

	for (int i = 0; i < n; i++) {
    ofile1 << course_arr[i].code << ","
          << course_arr[i].name << ","
          << course_arr[i].chours << ","
          << course_arr[i].semester << ","
          << course_arr[i].status << endl;
}
ofile1.close();

    ofile2 << left<< setw(12) << "Code"<< setw(28) << "Title"<< setw(15) << "Hours"<< setw(12) 
	<< "Semester"<< setw(15) << "Status"<< endl;

   ofile2 << "|...^...|^....^....^....^....^....^....^....^...|^...|^...|^....^....^...|^....^"<< endl;

    for(int i=0; i<n; i++){
	ofile2 << left
       << setw(12) << course_arr[i].code
       << setw(28) << course_arr[i].name
       << setw(15) << course_arr[i].chours
       << setw(12) << course_arr[i].semester
       << setw(15) << course_arr[i].status
       << endl;
}
ofile2.close();
cout<<"data is stored in files ^__^";
return 0;
}