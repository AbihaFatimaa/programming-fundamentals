#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const unsigned short int maxpower = 21;
// too store polynomails where degree <= 20
struct Polynomial
{
    int degree;
    unsigned int coefficients[maxpower];
};

Polynomial createPolynomial(int degree)
{
    Polynomial r;
r.degree = degree;
for (int i=0; i<maxpower; i++){
	r.coefficients[i]=0;
}

    return r;
}

void printPolynomial(const Polynomial &p)
{
	bool firstval = true;
for(int i=p.degree; i>=0; i--){
	if(!firstval){
		cout<<"+";
	}
	if(i == 0 || p.coefficients[i] != 1){
		cout<<p.coefficients[i];
	}
	if(i>0){
		cout<<"x";
		if(i>1){
			cout<<"^"<<i;
		}
	firstval = false;
	}
	if(firstval){
		cout<<"0";
	}

}	cout<<endl;

    return;
}

Polynomial inputPolynomial(int degree)
{
    Polynomial t = createPolynomial(degree);
    for(int i= degree; i>=0; i--){
    	cout<<"enter coeffficient of x^"<<i<<":";
    	cin>>t.coefficients[i];
	}cout<<endl;
    return t;
}

void updatePolynomial(Polynomial &p)
{
	for(int i=p.degree; i>=0; i--){
		cout<<"enter coefficents for x^"<<i<<":"<<endl;
		cin>>p.coefficients[i];
	}
	for(int i=p.degree+1; i<maxpower; i++){
		p.coefficients[i]=0;
	}
    return ;
}

Polynomial addPolynomials(const Polynomial &p1, const Polynomial &p2)
{
    int maxdeg = (p1.degree > p2.degree) ? p1.degree:p2.degree;
    Polynomial t = createPolynomial(maxdeg);
	for(int i= 0; i<=maxdeg; i++){
    t.coefficients[i] = p1.coefficients[i]+p2.coefficients[i];
	}
    return t;
}

unsigned int value(const Polynomial &m, int varValue)
{
    unsigned int v =0;
    for (int i = m.degree; i>=0; i--){
    	v = v*varValue + m.coefficients[i];
	}
    return v;
}

int main()
{
    cout << "Enter 3 coefficients for Polynomial of degree 2" << endl;
    Polynomial m1 = inputPolynomial(2);
    cout << "Your Polynomial is:" << endl;
    printPolynomial(m1);
    
    cout << "Again enter 3 coefficients for same Polynomial of degree 2" << endl;
    updatePolynomial(m1);
    cout << "Your Polynomial is:" << endl;
    printPolynomial(m1);

    int v = value(m1, 2);
    cout << "The polynomial for x = 2 is evaluated as:" << endl;
    cout << v << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Enter 4 coefficients for a degree 3 polynomial" << endl;
    Polynomial a = inputPolynomial(3);
    cout << "Your Polynomial is:" << endl;
    printPolynomial(a);
    
    cout << "Now enter 3 coefficients for another degree 2 polynomial" << endl;
    Polynomial b = inputPolynomial(2);
    cout << "Your Polynomial is:" << endl;
    printPolynomial(b);
    
    Polynomial c;  // after this line total garbage
    c = addPolynomials(a, b);
    cout << "Sum of above two polynomials is" << endl;
    printPolynomial(c);

	return 0;
}