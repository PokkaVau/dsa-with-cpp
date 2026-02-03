#include <iostream>
using namespace std;

int main(){
    //to check whether a character is uppercase or lowercase

    char ch;
    cout << "Enter Your Character : ";
    cin >> ch;

    
    // 65-90 --> A-Z(Uppercase)
    // 97-122 --> a-z(Lowercase)

    //condition for checking 

    if(ch>=65 && ch<=90){
        cout << "Uppercase\n";
    }else{
        cout << "Lowercase\n";
    }

    /*Alternative Method
    ch='A' && ch='Z' --> it will print uppercase
    either it will print lowercase*/

    return 0;


}