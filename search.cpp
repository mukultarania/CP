#include<iostream>
#include<algorithm>
using namespace std;

void search(int arr[],int n,int key){
    auto it = find(arr, arr + n, key);
    int index = it - arr;
    if (index == n)
    {
        cout << key << " Not Present";
    }
    else
    {
        cout << "Present At: " << index << endl;
    }
}

void bsearch(int arr[], int n, int key){
    bool present = binary_search(arr, arr+n, key);
    if(present){
        cout<<"Present"<<endl;
    }else{
        cout<<"Not Present";
    }
    auto lb = lower_bound(arr, arr+n, key);
    cout<<"Lower BOund of "<<key<<" :"<<(lb-arr)<<endl;
    
    auto ub = upper_bound(arr, arr + n, key);
    cout << "Upper BOund of " << key << " :" << (ub - arr) << endl;

    cout<<"OCC Freq of "<<key<<" is "<<(ub-lb);
}
int main(){

    int arr[] = {2, 2, 3, 3, 3, 4, 4, 4};
    int n = sizeof(arr)/sizeof(int);

    //Search
    int key;
    cout<<"Enter Key To Find: "<<endl;
    cin>>key;
    // search(arr, n, key);
    
    //Binary Search
    bsearch(arr, n, key);

    return 0;

}