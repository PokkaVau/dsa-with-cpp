#include <iostream>
using namespace std;

int main(){

    //to check whether a num is even or odd

    int n;
    cout << "Enter your number: ";
    cin >> n;


    //condition for checking
    if(n%2==0){

        cout << "Even\n";//even
    }else{
        cout << "Odd\n";//odd
    }


    return 0;
}
