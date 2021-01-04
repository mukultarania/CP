#include<iostream>
using namespace std;

int maxTile(int n, int k){
    if(n<=3) return 1;

    int c = maxTile(n-1, k) + maxTile(n-k, k);
    return c;
}

int main(){
    int n, k;
    n = 4;
    k = 4;
    cout<<maxTile(n,k);
}