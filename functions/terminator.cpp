# include <iostream>
# include <string>
using namespace std;

const int terminator = -1;
void makeArrayEmpty(int ar[], const int as)
{
    for(int j=0; j<as; j+=1)
    {
        ar[j] = terminator;
    }
    return;
}
void showArray (int ar[], const int as){
        for(int j=0; j<as && ar[j] != terminator; j++) {
		 cout << ar[j] << " ";
		  }
		  cout<<endl;
}
int arraysize (int arr[], int as){
	int count = 0;
    for (int i = 0; i < as && arr[i] != terminator; i++){
            count++;}
            
    return count;
}
void addData (int data, int arr[], int as){
	int ds = arraysize (arr,as);
	if (ds>=as){
		cout<<"ARRAy FULL";
		return;
	}
	int i=0;
	while(i<as && arr[i]!= terminator && arr[i]<data){
		i++;
	}
    for (int j = ds; j>i; j--){
    arr[j]=arr[j-1];	
	}
    arr[i] = data;
    arr[ds+1] = terminator;
}
void removeData (int data, int arr[], int as){
	int i =0;
	while(i<as && arr[i]!= terminator){
		if(arr[i] == data){
			int j=i;
			while (j<as-1 && arr[j+1] != terminator){
				arr[j]= arr[j+1];
				j++;
			}
			arr[j] = terminator;
			}
			else {i++;
			}
	}
}
void updateData (int oldData, int NewData, int arr[], int as){
	removeData (oldData, arr, as);
	addData (NewData, arr, as);
}
int main(){
	const int as = 10;
    int a[as];
    makeArrayEmpty(a, as);

    addData(63, a, as);
    addData(19, a, as);
    addData(47, a, as);
    showArray(a, as);

    updateData(19, 80, a, as);
    showArray(a, as); 

    addData(47, a, as); 
    addData(59, a, as);
    addData(22, a, as);
    showArray(a, as); 

    removeData(47, a, as);
    showArray(a, as);

    return 0;
}