# include<iostream>
# include <string>
using namespace std;
int main(){
int x = 256;
char* cp = (char*)&x;
for(int i = 0; i < sizeof(int); i++)
{
    cout << (int)*(cp + i) << " ";
}	
return 0;
}







