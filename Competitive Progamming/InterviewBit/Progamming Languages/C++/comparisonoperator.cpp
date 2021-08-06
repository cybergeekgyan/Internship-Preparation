#include<iostream>

using namespace std;

int main()  {
    int num;
    cin>>num;

    // Your code goes here
    if (num>=90 ){
    cout << "A" << endl;
    }
    
    if (num>=80){
    cout << "B" << endl;
    }

    if (num>=70){
    cout << "C" << endl;
    }

    if (num>=60){
    cout << "D" << endl;
    }
    
    if (num>=50){
        cout << "E" << endl;
    }
    
    else {
        cout << "F" << endl;
    }
   

    return 0;
}
