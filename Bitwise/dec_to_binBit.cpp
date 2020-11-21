#include<iostream>
using namespace std;

int decToBin(int n){
    int ans = 0;
    int p = 1;

    while(n>0){
        int last_bit = (n&1);
        ans += p*last_bit;

        p *= 10;
        n = n>>1;
    }

    return ans;
}

int main(){

    int n;
    cin>>n;
    cout<<n<<" in decimal is "<<decToBin(n)<<endl;
}