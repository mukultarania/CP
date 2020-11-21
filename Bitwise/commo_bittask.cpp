#include <iostream>
using namespace std;

bool isOdd(int n){
    return (n&1);
}

int getBit(int n, int i){
    int mask = (1<<i);
    int bit = (n&mask)>0?1:0;
    return bit;
}

int setBit(int n, int i)
{
    int mask = (1 << i);
    int bit = (n | mask);
    return bit;
}

void clrBit(int &n, int i)
{
    int mask = ~(1 << i);
    int bit = (n & mask);
}

void updateBit(int &n, int i, int v)
{
    int mask = ~(1 << i);
    int bit = n&mask;
    n = bit|(v<<i);

}

int clrLastIBits(int x, int i){
    int mask = (-1 << i);
    return x&mask;
}

int clrKtoJBits(int x, int k, int j){
    int a = -1 << (j+1);
    int b = (1<<k) - 1;
    int mask = a|b;
    return (x&mask);
}

int main(){
    int n;
    cout << "Enter Number " << endl;
    cin>>n;

    //Checking Even and Odd
    if(isOdd(n)) cout<<n<<" is odd"<<endl;
    else cout<<n<<" is Even"<<endl;

    //Bit at i position
    int i;
    cout<<"Enter Position i to find bit"<<endl;
    cin>>i;
    cout<<"Bit at "<<i<<" is "<<getBit(n, i)<<endl;

    //Bit at i position
    cout << "Set at " << i << " : " <<n<<" become "<< setBit(n, i) << endl;

    //Clear Bit at i position
    clrBit(n, i);
    cout << "After Clear at " << i << " : N become " << n << endl;

    int x = 31;
    int k = 1, j = 3;
    //Clear last ith bits
    cout<<clrLastIBits(x, j)<<endl;

    //clear Bits for k to j
    cout<<clrKtoJBits(x, k, j);


}
