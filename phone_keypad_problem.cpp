#include<iostream>
using namespace std;

char keypad[][10] = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO","PQRS", "TUV", "WXYZ"};

void generate_names(char *out, char *in, int i, int j){
    //Base Case
    if(in[i] == '\0'){
        out[j] = '\0';
        cout<< out<< endl;
        return;
    }

    //Recursion Case
    int digit = in[i] - '0';
    if(digit == 0 || digit == 1){
        generate_names(out, in, i+1, j);
    }
    for(int k = 0; keypad[digit][k] != '\0'; k++){
        out[j] = keypad[digit][k];
        //FIll the remainig part
        generate_names(out, in, i+1, j+1);
    }
    return;
}

int main(){

    char in[100];
    cin>>in;

    char out[100];
    generate_names(out, in, 0, 0);

};