// In this problem we wants to find a number of way in which we can reach N steps by taking max(k) 
// steps at a time
#include <iostream>
using namespace std;

int f(int n, int k)
{   
    //Checking base case
    if(n == 0) return 1;
    if(n<0) return 0;
    int ans = 0;
    // ans = f(n-1) + f(n-2) .... + f(n-k);
    for(int i = 1; i<=k; i++){
        ans += f(n-i, k);
    }
    return ans;
}

int main()
{
    int n, k;
    n = 4;
    k = 3;
    cout << f(n, k)<<endl;
}