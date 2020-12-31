#include<iostream>
using namespace std;

//Bubble Sort using recursion
void bubblesort(int a[], int n){
    //If there is only one element
    if(n == 1) return;

    for(int i = 0; i<n-1; i++){
        if(a[i]>a[i+1]){
            swap(a[i], a[i+1]);
        }
    }
    bubblesort(a, n-1);

}

int main()
{
    int arr[] = {1, 2, 3, 7, 4, 5, 6, 7, 10};
    int n = sizeof(arr) / sizeof(int);

    bubblesort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
}