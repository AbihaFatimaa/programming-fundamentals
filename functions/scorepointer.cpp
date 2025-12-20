/*Declare an integer variable named score and initialize it with the first input value
Create a pointer named scorePtr that points to the score variable using the address-of operator
Print the original value of score by accessing it directly (not through the pointer)
Use the dereference operator to change the value of score to the second input value through the pointer
Print the modified value of score by accessing it directly again
Print the memory address stored in the pointer*/

# include <iostream>
# include <string>
using namespace std;
int main(){
    int initialValue, newValue;
    cin >> initialValue;
    cin >> newValue;
    int score = initialValue;
    int* scorePtr = &score;
    cout<<"Original score: "<<score<<endl;
    score = newValue;
    cout<<"Modified score: "<<score<<endl;
    cout<<"Pointer address: "<<&score; 
   
    return 0;
}
