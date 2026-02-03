#include <iostream>
using namespace std;

//To find eligible for voting
int main(){

    int age;
    cout << "Enter your age: ";
    cin >> age;
    
    //condition for checking eligible
    if(age>=18){
        cout << "Eligible\n";//eligible
    }else{
        cout << "Not Eligible\n";//not eligible
    }



    return 0;
}
