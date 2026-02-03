#include <iostream>
using namespace std;

int main(){
    //Type Casting


    //conversion--> implicit [it is done by the compiler]
    // small --> big
    float grade = 4.88f;
    double newGrade = grade;
    cout << newGrade << endl;

    //castiing--> explicit [it is done by the user forcefully]
    // big --> small
    int a = 5;
    int b = 2;
    float result = (float) a / b;
    cout << result << endl;



    return 0;
}
