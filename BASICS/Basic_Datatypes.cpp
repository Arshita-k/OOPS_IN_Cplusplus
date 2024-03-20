#include <iostream>
using namespace std;
 //Some built-in datatypes used in c++ 
int main()
{
    //INTEGRAL TYPE
    char c='A'; //Character datatype  (No. of bytes = 1 )
    int i=19; //integer datatype (No. of bytes = 2 )

    //FLOATING TYPE
    float f=12.45; //floating point datatype (No. of bytes = 4 )
    double d=56435.7897; //double ( No. of bytes = 8 )
/* 
    Void datatype 
    -> It is used for return type of a function when it is not returning any value
    -> It is used in declaration of generic pointers
*/
    void *generic_pointer;
    int *ptr;
    generic_pointer=ptr; //A generic pointer can be assigned a pointer value of any basic data type

    // *ptr=*generic_pointer is invalid

    //A void pointer cannot be directly assigned to other type pointers in C++
    void *ptr1;
    char *ptr2;
    ptr2 = (char *)ptr1; 
}

