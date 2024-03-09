#include <iostream>
using namespace std;

//Return type of function can be void, int, float etc,

//Return by reference the function returns a reference to a or b
int & max(int &a,int &b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
main()
{
    int n1=34,n2=23;
    cout<<"Values of n1 :" << n1 << endl 
        <<"Values of n2 :" << n2 << endl;
    cout<<"Maximum value is: "<< max(n1,n2) <<endl;

//function call yield a reference to either n1 or n2 depending on their values
    max(n1,n2)=1; //assigns 1 to number which is larger
    cout<<"Values of n1 :" << n1 << endl 
        <<"Values of n2 :" << n2 << endl;

    return 0;
}