#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>nums(6);
    nums={2,3,5,4,6,0};
    int n=nums.size();
    int a1=nums[0];
    int a2=1;
    for(int i=1;i<n;i++)
    {
        a1 = a1 ^ nums[i];
    }
    for(int i=2;i<=n+1;i++)
    {
        a2 = a2 ^ i;
    }
    cout<<(a1 ^ a2);
    return 0;
}
