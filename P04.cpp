#include <iostream>
using namespace std;

int main()
{

    // Arithmetic Operations
    int a, b;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;

    int sum = a + b;
    int sub = a - b;
    int pro = a * b;
    int div = a / b;
    int mod = a % b;

    cout << "Sum is : " << sum << endl;
    cout << "Subtraction is : " << sub << endl;
    cout << "Product is : " << pro << endl;
    cout << "Division is : " << div << endl;
    cout << "Mod is : " << mod << endl;

    return 0;
}
