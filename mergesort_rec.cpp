#include<iostream>
using namespace std;

void merge(int a[], int s, int e){
    int mid = (s+e)/2;
    int i = s, j = mid+1 ,k = s;
    int temp[100];

    while(i<=mid && j <=e){
        if(a[i] < a[j]){
            temp[k++] = a[i++];
        }else {
            temp[k++] = a[j++];
        }
    }
    while(i<=mid){
        temp[k++] = a[i++];
    }
    while(j<=e){
        temp[k++] = a[j++];
    }
    //Copy element from temp to a
    for(int i = s; i<=e; i++){
        a[i] = temp[i];
    }

}

void mergeSort(int a[], int s, int e){
    if(s == e){
        return;
    }

    int mid = (s+e)/2;

    mergeSort(a, s , mid);
    mergeSort(a, mid+1, e);

    merge(a, s, e);
}

int main(){
    int n = 10;
    int arr[10];
    for(int i = n; i>0; i--) arr[i] = i;

    mergeSort(arr, 0, n-1);

    for(int i = 0; i<n; i++) cout<<arr[i]<<" ";

}