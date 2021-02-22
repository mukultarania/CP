// You have to find minimum number of coins that will sum up to given money.
// Example  money = 112
// Many ways
// 112 = 20 + 20 + 20 + 20 + 20 + 10 + 1 + 1    total = 8
// 112 = 100 + 10 + 2                           total = 3
#include<iostream>
#include<algorithm>
using namespace std;

int make_change(int *coins, int n, int money){
    int ans = 0;
    while(money > 0){
        //Give max note less than sum of money
        // Example 112 -> 100
        // 12 -> 10
        // 2 -> 2
        // upper_bond() - 1 (give base address) - coins (address of that note)
        int idx =   upper_bound(coins, coins+n, money) - 1 - coins;
        cout<<coins[idx]<<" ";
        money = money - coins[idx];  
        ans++;
    }
    cout<<endl;
    return ans;
}

int main(){
    int money;
    cout<<"Enter Money"<<endl;
    cin>>money;
    
    //Available Currency
    int coins[] = {1 , 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    int t = sizeof(coins) / sizeof(int);
    cout<<"Total Number of Coins required "<<make_change(coins, t, money);

}