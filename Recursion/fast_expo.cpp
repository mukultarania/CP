#include <iostream>
using namespace std;

int fastExpo(int a, int n){
    int ans = 1;
    while(n>0){
        int lastbit = (n&1);
        if(lastbit){
            ans = ans*a;
        }
        // cout<<ans<<n<<a<<endl;
        a = a*a;
        n = n>>1;
    }
    return ans;
}

int pow(int a, int n){
    if(n == 0){
        return 1;
    }
    int subprob = pow(a, n/2);
    if(n&1) return a*subprob*subprob;

    return subprob * subprob;
}

int main(){
    
    int a,n;
    cin>>a>>n;
    cout<<fastExpo(a, n)<<endl;
    cout<<pow(a,n)<<endl;
}