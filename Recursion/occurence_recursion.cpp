#include<iostream>
using namespace std;

int firstOcc(int *a, int n, int key){
    if(n == 0) return -1;

    if (a[0] == key){
        return 0;
    }
    int i = firstOcc(a+1, n-1, key);
    if(i == -1) return -1;

    return i+1;
}

int lastOcc(int *a, int n, int key){
    if(n==0) return -1;
    int i = lastOcc(a+1, n-1, key);
    if(i == -1){
        if(a[0] == key){
            return 0;
        }else {
            return -1;
        }
    }
    return i+1;
}

int storeOcc(int *a, int i, int n, int key, int *out, int j ){
    if(i== n){
        return j;
    }
    if(a[i] == key){
        out[j] = i;
        return storeOcc(a, i+1, n, key, out, j+1);
    }

    return storeOcc(a, i+1, n, key, out, j);
}

int main(){
    int arr[] = {1, 2 ,3 , 7, 4 ,5 ,6 ,7, 10};
    int key = 7;
    int n = sizeof(arr)/ sizeof(int);
    cout<<"First Occurence @ "<<firstOcc(arr, n, key)<<endl;
    cout << "Last Occurence @ " << lastOcc(arr, n, key) << endl;
    int out[100];
    int cnt = storeOcc(arr, 0, n, key, out, 0);
    cout<<"Cout of key in array is "<<cnt<<endl;
    for(int i = 0; i<cnt; i++){
        cout<<" "<<out[i];
    }

}