#include <iostream>
#include <vector>
using namespace std;
// simple program to use array datatype
int main()
{
    int size=5;
    int arr[size]={0}; //1-D array of size 5 and each element intialised as 0
    for(int i=0;i<size;i++)
    {
        //output
        cout << "Enter Element  "<< i+1 <<" of array";
        //input
        cin >> arr[i];
    }
}
