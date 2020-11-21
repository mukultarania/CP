#include <iostream>
using namespace std;

int clrKtoJBits(int x, int i, int j)
{
    int a = -1 << (j + 1);
    int b = (1 << i) - 1;
    int mask = a | b;
    return (x & mask);
}

int replaceNM(int n, int m, int i, int j){
    n = clrKtoJBits(n,i,j);
    int ans = n | (m<<i);
    return ans;
}

int main(){

    int n = 15, i = 1, j = 3, m= 2;
    cout<<replaceNM(n, m, i ,j)<<endl;
}