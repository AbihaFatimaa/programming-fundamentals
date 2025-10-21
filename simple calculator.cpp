#include <iostream>
# include <string>
# include <iomanip>
using namespace std;

int main() {
    cout<<"Calculator App"<<endl;
    double fn,sn;
    cin>>fn;
    cin>>sn;
    cout<<fixed<<setprecision(2);
    double sum = fn+sn;
    cout<<"Sum: "<<sum<<endl;
    double diff = fn-sn;
    cout<<"Difference: "<<diff<<endl;
    double prod = fn*sn;
    cout<<"Product: "<<prod<<endl;
    double div = fn/sn;
    cout<<"Division: "<<div<<endl;

    return 0;}
