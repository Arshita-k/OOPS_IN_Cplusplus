#include <iostream>
using namespace std;
/* Call by value in this function creates a new set of variables and copies the values of arguments in them
 the function does not have access to actual variables hence does not alter the actual variable values
*/
void swap1(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;

}
/*Call by reference in this we pass parameters to function by reference, they are reference variables
(alias name for actual variables) hence here we are working on actual variables
*/
void swap2(int &a,int &b) //void swap1(int *a,int *b)
{
    int temp=a;
    a=b;
    b=temp;

}
/*Call by pointers 

void swap2(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
*/

main()
{
    int num1,num2;
    int n1=34,n2=23;
    cout<<"Values of n1 :" << n1 << endl 
        <<"Values of n2 :" << n2 << endl;
    //Input two numbers
    cout << "Enter Number 1 : ";
    cin >> num1 ;
    cout << "Enter Number 2 : ";
    cin >> num2;
    swap1(n1,n2);
    swap2(num1,num2);
    //swap2(&num1,&num2); //call by passing address of variables used in call by pointers functions
    cout<<"Values of n1 :" << n1 << endl 
        <<"Values of n2 :" << n2 << endl;
    cout<<"Values of num1 :" << num1 << endl 
        <<"Values of num2 :" << num2 << endl;

    return 0;
}
