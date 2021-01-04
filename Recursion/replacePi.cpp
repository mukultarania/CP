//In this program we replace substring pi to 3.14 recursively
#include<iostream>
using namespace std;

void replacePii(char *arr, int i){
    if(arr[i] == '\0' || arr[i+1]=='\0'){
        return;
    } 

    if(arr[i] == 'p' && arr[i+1] == 'i'){
        int j = i+2;
        while(arr[j] != '\0'){
            j++;
        }
        while(j>=i+2){
            arr[j+2] = arr[j];
            j--;
        }
        arr[i] = '3';
        arr[i+1] = '.';
        arr[i+2] = '1';
        arr[i+3] = '4';
        replacePii(arr , i+4);
    }else{
        replacePii(arr, i+1);
    }
    return;
}

int main(){
    char arr[1000];
    cin>>arr;
    cout<<"Before Replace ->"<<arr<<endl;
    replacePii(arr, 0);
    cout << "After Replace ->" << arr << endl;
    return 0;
}