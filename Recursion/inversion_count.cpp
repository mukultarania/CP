#include<iostream>
using namespace std;

int merge(int *arr, int s, int e){
    int mid = (s+e)/2;
    int temp[10000];
    int i = s;
    int j = mid+1;
    int k = s;
    int cnt = 0;

    while(i<=mid && j<=e){
        if(arr[i] <= arr[j]){
            temp[k] = arr[i];
            k++;
            i++;
        }else{
            temp[k++] = arr[j++];
            cnt += mid -i +1;      
        }
    }
    while(i<=mid){
        temp[k++] = arr[i++];
    }
    while(j<=e){
        temp[k++] = arr[j++];
    }
    for(int x = s; x<=e; x++){
        arr[x] = temp[x];
    }
    return cnt;

}

int inversionCount(int *arr, int s, int e){
    if(s>=e){
        return 0;
    }

    int mid = (s+e)/2;
    int x = inversionCount(arr, s, mid);
    int y = inversionCount(arr, mid+1, e);
    //Cross Inversion
    int z = merge(arr, s, e);

    return x+y+z;

}

int main(){
    int arr[] = {1, 5 ,2 ,6 ,3 ,0};
    int n = sizeof(arr)/sizeof(int);
    cout<< inversionCount(arr, 0, n-1)<<endl;
    return 0;
}