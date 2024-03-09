/* A refernce variable provides an alias (alternative) name for a previously defined variable.
 data-type & reference-vairiable =variable name;
*/ 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number = 20;
    int & ref = number;

    cout << "Value of Number: " <<  number << endl;
    cout << "Value of Reference variable : " <<  ref << endl;

    //intialising a reference to a literal such as \n
    const char & ref2 = '\n';
    
    cout << "Value of Reference: " <<  ref << ref2 ;
    //changing  reference variable changes original variable as both have same address

    ref = ref + 5;
    cout << "Change in value: " <<  number << endl;
   
}