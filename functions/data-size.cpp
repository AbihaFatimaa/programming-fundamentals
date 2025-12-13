# include<iostream>
# include<string>
using namespace std;
void showArray (int ar[], const int as, const int ds){
	 if (as >= ds)
    {
        for(int j=0; j<ds; j+=1)
        {
            cout << ar[j] <<" ";
        }
        cout<< endl;
    }
}
void addData (int data, int ar[], const int as, int &ds){
	if(ds>=as){
		cout<<"ARRAY FULL";
	}
	int i = ds-1;
	while(i>=0 && ar[i]>data){
		ar[i+1]=ar[i];
		i--;
	}
	ar[i+1]=data;
	ds++;
}
void removeData (int data, int ar[], const int as, int &ds){
	int i=0;
	while(i<ds){
		if (ar[i] == data){
			for(int j=i; j<ds-1; j++){
				ar[j] = ar[j+1];}
				ds--;
			}
			else{
			i++;
				}
			
		}
	}

void updateData (int oldData, int newData, int ar[], const int as, int &ds){
	removeData(oldData, ar, as, ds); 
    addData(newData, ar, as, ds);
} 
int main(){
	const int as = 10;
    int a[as];
    int ds = 0;
    addData(63, a, as,ds);
    addData(19, a, as,ds);
    addData(47, a, as,ds);
    showArray(a, as,ds);

    updateData(19, 80, a, as,ds);
    showArray(a, as,ds); 

    addData(47, a, as,ds); 
    addData(59, a, as,ds);
    addData(22, a, as,ds);
    showArray(a, as,ds); 

    removeData(47, a, as,ds);
    showArray(a, as,ds);

    return 0;
}