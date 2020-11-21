#include <iostream>
#include <stdio.h>
using namespace std;

//First Method O(log(n)+1)
int countBits(int n){
    int ans = 0;
    while(n>0){
        ans += (n&1);
        n = n>>1;
    }
    return ans;
}

int countBitsFast(int n)
{
    int ans = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        ans++;
    }
    return ans;
}

int main()
{   
    int n;
    cout<<"Enter Number ";
    cin>>n;
    cout << "No. of bits in " << n << " is " << countBits(n) << endl;
    cout << "No. of bits in " << n << " is " << countBitsFast(n) << endl;
    //Builtin Function
    // cout << "No. of bits in " << n << " is " << __builtin_popcount(4) << endl;
}