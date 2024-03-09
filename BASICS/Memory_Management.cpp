/* Dynamic Memory Allocation is the process of assigning the memoryspace during the execution time or run time.
In C++ it is done using two unary operators new and delete
-> new: is used to dynamicaly allocate memory to a object from free store.
-> delete: is used to free memory space allocated to the object or destroy the object created by new.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    //new operator
    //pointer-variable = new datatype;
    int *ptr1; //pointer of type int
    ptr1 = new int;

    float *ptr2 = new float; //declaration of pointer of type of float
    *ptr2=25;//intialisation
    
    //pointer-variable = new datatype(value);
    char *ptr3 = new char('A');

    if(!ptr1)
    {
        cout<<"Sufficient memory is not available."<<endl;
        cout<<"new returns a null pointer";
    }

    //pointer-variable = new datatype(size)
    int *array = new int[4]; //1D Array

    //delete operator
    //delete pointer-variable;
    delete ptr1,ptr2,ptr3;

    //To free dynamically allocated array 
    //delete [size]pointer-variable; or delete []pointer-variable
    delete[]array;

}