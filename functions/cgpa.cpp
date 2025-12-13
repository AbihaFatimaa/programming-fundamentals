#include <iostream>
#include <string>
#include <array>

using namespace std;

struct GradingTable
{
    array<int, 10> start;
    array<int, 10> end;
    array<string, 10> grade;
    array<double, 10> points;
};

string grade(GradingTable, int);
double points(GradingTable, int);

int main()
{
    array<string, 5> mycourses{"IS", "FQ", "PF", "PFLAB", "FE"};
    array<int, 5> cthrs{2, 0, 3, 1, 3};
    array<int, 5> pmarks{78, 73, 59, 67, 82};

    GradingTable gradeTable;
    
    gradeTable.start[0] = 85;
    gradeTable.end[0] = 100;
    gradeTable.grade[0] = "A";
    gradeTable.points[0] = 4.0;
    
    gradeTable.start[1] = 80;
    gradeTable.end[1] = 84;
    gradeTable.grade[1] = "A-";
    gradeTable.points[1] = 3.7;
    
    gradeTable.start[2] = 75;
    gradeTable.end[2] = 79;
    gradeTable.grade[2] = "B+";
    gradeTable.points[2] = 3.3;
    
    gradeTable.start[3] = 70;
    gradeTable.end[3] = 74;
    gradeTable.grade[3] = "B";
    gradeTable.points[3] = 3.0;
    
    gradeTable.start[4] = 65;
    gradeTable.end[4] = 69;
    gradeTable.grade[4] = "B-";
    gradeTable.points[4] = 2.7;
    
    gradeTable.start[5] = 61;
    gradeTable.end[5] = 64;
    gradeTable.grade[5] = "C+";
    gradeTable.points[5] = 2.3;
    
    gradeTable.start[6] = 58;
    gradeTable.end[6] = 60;
    gradeTable.grade[6] = "C";
    gradeTable.points[6] = 2.0;
    
    gradeTable.start[7] = 55;
    gradeTable.end[7] = 57;
    gradeTable.grade[7] = "C-";
    gradeTable.points[7] = 1.7;
    
    gradeTable.start[8] = 50;
    gradeTable.end[8] = 54;
    gradeTable.grade[8] = "D";
    gradeTable.points[8] = 1.0;
    
    gradeTable.start[9] = 0;
    gradeTable.end[9] = 49;
    gradeTable.grade[9] = "F";
    gradeTable.points[9] = 0.0;
    
    cout << "Course, Credits, Marks" << endl;
    int j = 0;
    while(j < 5)
    {
        cout << mycourses[j] << ", " << cthrs[j] << ", " << pmarks[j] << endl;
        j = j + 1;
    }

    cout << "-------------------------" << endl;
    int m;
    m = 45;
    cout << "Marks " << m << endl;
    cout << "Grade " << grade(gradeTable, m) << endl;
    cout << "Points " << points(gradeTable, m) << endl;
    m = 55;
    cout << "Marks " << m << endl;
    cout << "Grade " << grade(gradeTable, m) << endl;
    cout << "Points " << points(gradeTable, m) << endl;
    m = 75;
    cout << "Marks " << m << endl;
    cout << "Grade " << grade(gradeTable, m) << endl;
    cout << "Points " << points(gradeTable, m) << endl;
    m = 80;
    cout << "Marks " << m << endl;
    cout << "Grade " << grade(gradeTable, m) << endl;
    cout << "Points " << points(gradeTable, m) << endl;

    cout << "-------------------------" << endl;

    cout << "Course, Credits, Marks, Grade, Points" << endl;
    j = 0;
    while(j < 5)
    {
        cout << mycourses[j] << ", " << cthrs[j] << ", " << pmarks[j] << ", " << grade(gradeTable, pmarks[j]) << ", " << points(gradeTable,pmarks[j]) << endl;
        j = j + 1;
    }

    cout << "-------------------------" << endl;

    double sumCredits = 0.0;
    double sumPoints = 0.0;
    j = 0;
    while(j < 5)
    {
        sumCredits = sumCredits + cthrs[j];
        sumPoints = sumPoints + cthrs[j]*points(gradeTable,pmarks[j]);
        j = j + 1;
    }
    cout << "GPA: " << sumPoints / sumCredits << endl;
    
	return 0;
}

string grade(GradingTable grds, int mrks)
{
    for (int i = 0; i < 10; i++)
    {
        if (mrks >= grds.start[i] && mrks <= grds.end[i])
        {
            return grds.grade[i];
        }
    }
    return "Invalid"; // in case marks are negative or above 100
}


double points(GradingTable pnts, int mrks)
{
     for (int i = 0; i < 10; i++)
    {
        if (mrks >= pnts.start[i] && mrks <= pnts.end[i])
        {
            return pnts.points[i];
        }
    }
    return 0.0;   
}

