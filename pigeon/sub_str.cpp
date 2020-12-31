#include <iostream>
using namespace std;

void subStr(char a[], int n){
    int j = 0;
    while (n > 0)
    {
        int lastbit = (n & 1);
        if (lastbit == 1)
        {
            cout << a[j];
        }
        j++;
        n = (n>>1);
    }
    cout << endl;
}

void printSub(char a[]){
    int n = strlen(a);
    for (int i = 0; i < (1 << n); i++)
    {
        subStr(a, i);
    }
    return;
}

// Print all the subsequences of a string

// void filterchar(char *a,int n)
// {
//     int i=0;
//     while(n>0)
//     {
//         (n&1==1)?cout<<a[i]:cout<<"";
//         i++;
//         n=n>>1;
//     }
//     cout<<endl;
// }

// void generate_subs(char *a)
// {
//     int n = strlen(a);
//     int range = (1 << n) - 1;
//     for (int i = 0; i <= range; i++)
//     {
//           filterchar(a,i);
//     }
// }

int main(){

    char a[100];
    cin>>a;
    // generate_subs(a);
    printSub(a); 
    return 0;
}