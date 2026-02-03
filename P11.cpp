#include <iostream>
using namespace std;

int main(){

    //print numbers from 1 to n

    int n;
    cout << "Enter n : ";
    cin >> n;

    //loop starts from here

    int count=1;//inisialisation step
    while(count<=n){//condition
        cout << count << " ";
        count++;//updation
    }



    return 0;
}