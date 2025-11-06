#include <iostream>
#include <string>
#include <array>
#include <complex>
#include <exception>

using namespace std;

struct sf
{
    string nam;
    double weight;
};

int main()
{
    int a{222};
    int b{345};
    string s{"06:52"};
    array<int, 3> r{2,5,7};
    sf z{"nusrat fateh ali khan", 237};
    double fa[2]{2.343, 0.323};
    complex<double> c{2.343, 0.323};
    runtime_error ex{"ERROR: There is an exception, my dear coder!!"};
    
    cout << "a           " << a << endl;
    cout << "b           " << b << endl;
    cout << "a+b         " << a+b << endl;
    cout << "s           " << s << endl;
    
    //cout << "r " << r << endl;
    cout << "r[0]        " << r[0] << endl;
    cout << "r[1]        " << r[1] << endl;
    cout << "r[2]        " << r[2] << endl;
    
    //cout << "z " << z << endl;
    cout << "z.nam       " << z.nam << endl;
    cout << "z.weight    " << z.weight << endl;

    //cout << "fa    " << fa << endl;
    cout << "fa[0]       " << fa[0] << endl;
    cout << "fa[1]       " << fa[1] << endl;

    //cout << "c     " << c << endl;
    cout << "c.real()    " << c.real() << endl;
    cout << "c.imag()    " << c.imag() << endl;
    
    //cout << "ex    " << ex << endl;
    cout << "ex          " << ex.what() << endl;
    
	return 0;
}