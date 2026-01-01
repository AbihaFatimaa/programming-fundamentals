#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	fstream db;
	db.open("pakcities.txt", ios::ate | ios::in | ios::out);
    long filesize = db.tellg();
	cout << "File size is: " << filesize << endl;
    
    db.seekg(0);
    char record[1000];
    db.getline(record, 1000);
    long recordsize = db.gcount()+1; // 1 is added for \n
	cout << "Record size is: " << recordsize << endl;
	cout << "Record count is: " << filesize/recordsize << endl;
    
	cout << "Last three records are: " << endl;
    db.seekg(-recordsize*3, ios::end);
    db.getline(record, 1000);
    cout << record << endl;
    db.getline(record, 1000);
    cout << record << endl;
    db.getline(record, 1000);
    cout << record << endl;

	cout << "City prior to mangora is: " << endl;
	char cityname[21];
    int recno = 0;
    db.seekg(0);
    db.getline(cityname, 21);
    db.clear();
    while(db.gcount() > 0)
    {
        if (strcmp(cityname, "mingora             ") == 0)
        {
            cout << "mingora\'s record no is " << recno << endl;
            recno--;
            db.seekp(recno*(recordsize));
            db << left << setw(20) << "jalal abad";
            db.seekg((recno+2)*(recordsize));
            //break;
        }
        recno++;
        db.ignore(10000, '\n');
        db.getline(cityname, 21);
        db.clear();
    }

    db.close();
	cout << endl;
	return 0;
}