#include <iostream>
using namespace std;


int main(){

    /*for grade checking
    A--> 90-100
    B--> 80-89
    c--> 70-79
    D--> 60-69
    E--> 50-59
    F--> 0-49
    */

    int mark;
    cout << "Enter your mark : ";
    cin >> mark;

    //condition for checking grade

    if(mark>=90 && mark<=100){//grade--> A
        cout << "A\n";
    }else if(mark>=80 && mark<=89){//grade--> B
        cout << "B\n";
    }else if(mark>=70 && mark<=79){//garde--> C
        cout << "C\n";
    }else if(mark>=60 && mark<=69){//grade--> D
        cout << "D\n";
    }else if(mark>=50 && mark<=59){//garde--> E
        cout << "E\n";
    }else{
        cout << "F\n";//grade--> F
    }




    return 0;
}