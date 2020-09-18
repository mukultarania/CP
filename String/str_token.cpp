#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s[100] = "How was your day?";

    char *ptr = strtok(s, " ");

    while(ptr != NULL){
        cout<<ptr<<endl;
        ptr = strtok(NULL, " ");
    }

    return 0;
}