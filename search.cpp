#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int arr[] = {2, 31, 33, 1, 21};
    int n = sizeof(arr)/sizeof(int);

    //Search
    int key;
    cout<<"Enter Key To Find: "<<endl;
    cin>>key;
    
    auto it = find(arr, arr+n, key); 
    int index = it - arr;
    if(index == n){
        cout<<key<<" Not Present";
    }else{
    cout<<"Present At: "<<index<<endl;

    }

    return 0;

}