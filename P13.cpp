#include <iostream>
using namespace std;


int main(){

    //print sum of all numbers from 1 to n using while loop

    int sum=0;
    
    //user input
    int n;
    cout << "Enter n : ";
    cin >> n;

    //loop starts
    int i=1;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout << "Total sum is : " << sum << endl;



    return 0;
}