
#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter a marks: ";
    cin>>marks;
    if(marks<=100){
        if (marks >= 90) {
            cout << "You got A+" << endl;
        } else if (marks >= 80) {
            cout << "You got A" << endl;
        } else if (marks >= 70) {
            cout << "You got B" << endl;
        } else if (marks >= 60) {
            cout << "You got C" << endl;
        } else {
            cout << "You got F" << endl;
        }
    }
    else
    {
        cout<<"Please enter a valid marks ! your marks will be under 100.";
    }
}

// ternary statment
// condition ? str : srtt;
// str = true hoi 
// srtt= jodi false hoi 