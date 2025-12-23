#include <iostream>
#include <iomanip>
#include <array>
#include <cstdlib>
#include <ctime>

using namespace std;

int randcustomers()
{
    int min = 5372;
    int max = 9756;

    int randomValue = min + rand() % (max - min);    
    
    return randomValue ;
}

array<int, 12> avgGenderEachMonth(array<array<array<int, 12>, 9>, 2> a, int g) // g is gender index
{
	array<int, 12> msum;
	for(int m=0; m<12; m++) // months
	{
		msum[m] = 0;
		for(int o=0; o<9; o++) // outlets
		{
            msum[m] += a[g][o][m];
		}
        msum[m] /= 9; // sum to avg
	}
    return msum;
}

void outletsProgress(array<array<array<int, 12>, 9>, 2> a, int g, int m) // g:gender, m:month
{
    m--; // why, you think about it
    
    
    // following is not asked, it may be made more simple just for a month m
    array<int, 12> mavg = avgGenderEachMonth(a, 1); // 1 for female

    cout << "Gender: " << g << endl;
    cout << "Month: " << m << endl;
    cout << "Outlet#\tCount\tProgress" << endl;
    for(int o=0; o<9; o++)
    {
        cout << o << '\t' << a[g][o][m] << '\t';
        if(a[g][o][m] > mavg[m]) {cout << "Above Average\n";}
        if(a[g][o][m] < mavg[m]) {cout << "Below Average\n";}
        if(a[g][o][m] == mavg[m]) {cout << "Average Maintained\n";}
    }
    
    return;
}

int main()
{
    srand(time(NULL));

    string genders[2] = {"male", "female"};

    //int data[2][9][12] ;
    array<array<array<int, 12>, 9>, 2> data;

    int v,w,x;

    // input data with random marks
    v=0;
    while(v<2)
    {
        w=0;
        while(w<9)
        {
            x=0;
            while(x<12)
            {
                data[v][w][x] = randcustomers();
                x+=1;
            }
            w+=1;
        }
        v+=1;
    }

    outletsProgress(data, 1, 4); // 1 for female and 4 for april
 
	return 0;
}