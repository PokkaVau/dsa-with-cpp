#include <iostream>
using namespace std;


int main(){

    // to check whether a number is prime or not
    // prime num condN --> a whole number greater than 1 that cannot be exactly divided by any whole num other than itself. Ex: 7, 11

    int n;
    cout << "Enter your number : ";
    cin >> n;

    bool isPrime = true;

    // loop starts
    for(int i =2; i<=n-1 ; i++){
        if(n%i==0){
             isPrime = false; 
            break;

        }

    }

    if(isPrime==true){
        cout << "Prime Number\n";
    }else{
        cout << "Non Prime Number\n";
    }

    // optimal solution --> [i*i<=n] --> in this approach we will go i=2 to root n



    return 0;
}