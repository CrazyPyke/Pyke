/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    float number1, number2;
    cout<< "Enter First Number: ";
    cin>>number1;
    
    char method;
    cout<< "Enter your method: ";
    cin>>method;
    
    cout<< "Enter Secund Number: ";
    cin>>number2; 
    
    
    
    switch (method){
        case '+':
        cout << number1 + number1;
        break;
        case '-':
        cout<< number1 - number2;
        break;
        case '/':
        cout<<  number1 / number2;
        break;
        case '*':
        cout<< number1 * number2;
        break;
        default:
        cout<< "თქვენ არასწორედ შეიყვანეთ სიმბოლო, გთხოვთ გაგამოიყენოთ  : + - = /  "   ;
        
    }
    return 0;
}

