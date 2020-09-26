#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){

    // To find unique element in array using Bitwise XOR
    int n, x, ans = 0;
    cin>>n;
    while(n--){
        cin>>x;
        ans = ans^x;
    }
    cout<<ans<<endl;
}