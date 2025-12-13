#include <iostream>
#include <string>
using namespace std;

const int sentinal = -1;

void makeArrayEmpty(int ar[], const int as)
{
    for(int j=0; j<as; j+=1)
    {
        ar[j] = sentinal;
    }
    return;
}

void showArray(int ar[], const int as)
{
    for(int j=0; j<as; j+=1)
    {
        if(ar[j] != sentinal)
        {
            cout << ar[j] <<" ";
        }
    }cout<<endl;
    return;
}
int arraysize (int arr[], int as){
	int count = 0;
    for (int i = 0; i < as; i++)
        if (arr[i] != sentinal)
            count++;
    return count;
}
void addData(int data, int arr[], int as)
{
	int ds = arraysize(arr,as);
	if(ds>=as){
		cout<<"ARRAY FULL";
		return;
	}
	int i = ds-1;
	while(i>=0 && arr[i]>data){
		arr[i+1]=arr[i];
		i--;
		}
		arr[i+1]=data;
		}
void removeData(int data, int arr[], int as)
{
int i=0;
while(i<as && arr[i]!= sentinal){
if(arr[i] == data){
	int j=i;
	while(j<as-1 && arr[j+1] != sentinal){
		arr[j] = arr[j+1];
		j++;
	}
	arr[j]=sentinal;
}
    else
    i++;
}
}
void updateData(int oldData, int newData, int arr[], int as)
{
	removeData(oldData,arr,as);
	addData(newData, arr, as);
}

int main()
{
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
