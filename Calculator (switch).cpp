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
    int day;
    
    cout << "Enter Weekday: ";
    cin >> day;
    
    switch (day) {
        case 1:
        cout << "orshabati";
        break;
        case 2:
        cout << "samshabati";
        break;
        case 3:
        cout << "otxshabati";
        break;
        case 4:
        cout << "khutshabati";
        break;
        case 5:
        cout << "paraskevi";
        break;
        case 6: 
        cout << "shabati";
        break;
        case 7:
        cout << "kvira";
        break;
        
        //default  tu arcerti zemot agnisnuli shemtxveva ar aris agwerili sheasrulebs defoultshi agnishnul moqmedebas.
        default:
        cout << " araa kvioris dge";
        
    }

    return 0;
}
