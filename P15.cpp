#include <iostream>
using namespace std;

int main()
{

    // print sum of all even numbers using for loop

    int sum = 0;

    // user input
    int n;
    cout << "Enter n : ";
    cin >> n;

    // loop starts
    for(int i =1; i<=n; i++){

        if(i%2==0){
            sum+=i;
        }
    }

    cout << "Total sum of even : " << sum << endl;

    return 0;
}