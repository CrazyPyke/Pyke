
#include <iostream>

using namespace std;

int main()
{
    
    float number1, number2, number3;
    
    cout << "Enter first number: ";
    cin >> number1;
    
    cout << "Enter secund number: ";
    cin >> number2;
    
    cout << "Enter third number: ";
    cin >> number3;
    
    if (number1 > number2 && number3){
        cout << number1;
    } else if (number2 > number3){
        cout << number2;
    } else {
        cout << number3;
    }
    
    return 0;
}

