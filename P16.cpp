#include <iostream>
using namespace std;


int main(){

    // print numbers from 1 to n using do while loop

    int n;
    cout << "Enter n : ";
    cin >> n;

    // loop starts
    int i =1; // inisialisation
    do{
        cout << i << " "; 
        i++; // updation
    }while(i<=n); // condition




    return 0;
}