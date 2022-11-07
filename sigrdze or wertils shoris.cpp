
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x1,
        x2,
        y1,
        y2;
        
        cout << "შეიყვანეთ პირველი წერტილის კოორტინატები:  \n";
        cout << "x 1 = ";
        cin >> x1;
        cout << "y 1 = ";
        cin >> y1;
    
        cout << "შეიყვანეთ მეორე წერტილის კოორტინატები:  \n";
        cout << "x 2 = ";
        cin >> x2;
        cout << "y 2 = ";
        cin >> y2;
        
        cout << "დისტანცია თქვენს მიერ დასმულ წერტილებს შორის არის: "<< sqrt(((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));
         
         return 0;
        
        
        
   
}
