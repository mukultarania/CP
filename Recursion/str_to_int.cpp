#include<iostream>
using namespace std;

int stringToInt(char *a, int n){
    if(n == 0){
        return 0;
    }
    int digit = a[n-1] - '0';
    int small_ans = stringToInt(a, n-1);
    return small_ans*10 + digit;
}

int main(){
    char arr[] = "12344";
    int len = strlen(arr);
    int c = stringToInt(arr, len);
    cout<<c<<endl;
    cout << c+1 << endl;

}