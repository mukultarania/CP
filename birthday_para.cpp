#include<iostream>
using namespace std;

int main(){
    float x = 1.0;
    int people = 0;
    float num = 365;
    float denom = 365;
    float p;
    cout<<"Enter the probability"<<endl;
    cin>>p;

    while(x> 1-p){
        x = x*(num)/denom;
        num--;
        people++;

        cout<<"People "<< people<< " value of x "<<x<<endl;
    }

    return 0;
}