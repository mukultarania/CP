#include<iostream>
using namespace std;

char word[][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void printAlfa(int n){
    if(n == 0){
        return;
    }
    //Recursive call to N/10 Ex N == 1999, we call printAlfa(199)
    printAlfa(n/10);
    int x = n%10;
    cout<<word[x]<<" ";
}

int main(){
    //Taking Number from User
    int n;
    cin>>n;

    //Calling Function
    printAlfa(n);
    return 0;

}